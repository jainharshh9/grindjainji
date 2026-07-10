class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, vector<int>& diary, vector<bool>& visited) {

        // Base Case
        if (diary.size() == nums.size()) {
            ans.push_back(diary);
            return;
        }

        // Try every number
        for (int i = 0; i < nums.size(); i++) {

            if (visited[i]) continue;

            // Choose
            visited[i] = true;
            diary.push_back(nums[i]);

            // Explore
            solve(nums, diary, visited);

            // Backtrack
            diary.pop_back();
            visited[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> diary;
        vector<bool> visited(nums.size(), false);

        solve(nums, diary, visited);

        return ans;
    }
};