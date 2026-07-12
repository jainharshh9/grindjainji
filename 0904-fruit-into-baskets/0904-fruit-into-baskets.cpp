class Solution {
public:
    int totalFruit(vector<int>& s) {
         int n =s.size();
        int low = 0;
        int res = -1;

        unordered_map<int, int> mpp;

        for (int high = 0; high < n; high++) {
            mpp[s[high]]++;

            while (mpp.size() > 2) {
                mpp[s[low]]--;
                if (mpp[s[low]] == 0)
                    mpp.erase(s[low]);
                low++;
            }

           
                res = max(res, high - low + 1);
            }
        

        return res;
    }
};
    