class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);

        // Count frequency
        for (char ch : word) {
            freq[ch - 'a']++;
        }

        // Sort in descending order
        sort(freq.rbegin(), freq.rend());

        int ans = 0;

        // Calculate minimum pushes
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) break;
            ans += freq[i] * (i / 8 + 1);
        }

        return ans;
    }
};