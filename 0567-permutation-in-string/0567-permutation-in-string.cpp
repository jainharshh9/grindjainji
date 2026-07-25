class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int m = s1.length();
        int n = s2.length();

        if (m > n)
            return false;

        vector<int> need(26, 0);
        vector<int> have(26, 0);

        // Frequency of s1
        for (char ch : s1)
            need[ch - 'a']++;

        int i = 0;

        for (int j = 0; j < n; j++) {

            // Add current character
            have[s2[j] - 'a']++;

            // Window size > m, remove left character
            if (j - i + 1 > m) {
                have[s2[i] - 'a']--;
                i++;
            }

            // Compare frequencies
            if (j - i + 1 == m) {
                if (have == need)
                    return true;
            }
        }

        return false;
    }
};