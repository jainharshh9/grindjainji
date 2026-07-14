class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
      /*  int n = intervals.size();
        int i = 0;
        vector<vector<int>> res;

        // Step 1: Add all intervals before newInterval
        while (i < n && intervals[i][1] < newInterval[0]) {
            res.push_back(intervals[i]);
            i++;
        }

        // Step 2: Merge all overlapping intervals with newInterval
        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        res.push_back(newInterval);

        // Step 3: Add all remaining intervals
        while (i < n) {
            res.push_back(intervals[i]);
            i++;
        }

        return res;


        */
     int n = intervals.size();
bool insert = false;
vector<vector<int>> a;

for (int i = 0; i < n; i++) {
    if (!insert && newInterval[0] < intervals[i][0]) {
        a.push_back(newInterval);
        insert = true;
    }
    a.push_back(intervals[i]);
}

if (!insert)
    a.push_back(newInterval);

vector<vector<int>> ans;

int s1 = a[0][0];
int e1 = a[0][1];

for (int i = 1; i < a.size(); i++) {
    int s2 = a[i][0];
    int e2 = a[i][1];

    if (e1 >= s2) {
        e1 = max(e1, e2);
    } else {
        ans.push_back({s1, e1});
        s1 = s2;
        e1 = e2;
    }
}

ans.push_back({s1, e1});
return ans;
    }
};