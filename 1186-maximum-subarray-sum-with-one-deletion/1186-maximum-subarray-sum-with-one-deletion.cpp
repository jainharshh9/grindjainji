class Solution {
public:
    int maximumSum(vector<int>& a) {
        int n = a.size();

        int no_power = a[0];   // max sum ending here without deletion
        int power = 0;         // max sum ending here with one deletion
        int res = a[0];

        for (int i = 1; i < n; i++) {
            int v1 = a[i];
            int v2 = no_power + a[i];
            int v3 = power + a[i];
            int v4 = no_power;      // delete current element

            no_power = max(v1, v2);
            power = max(v3, v4);

            res = max(res, max(no_power, power));
        }

        return res;
    }
};