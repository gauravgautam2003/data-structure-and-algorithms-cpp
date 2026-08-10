class Solution {
public:
    void solve(vector<int> nums, int i, int j, vector<vector<int>>& ans) {
        // base case
        if(i == j - 1) {
            ans.push_back(nums);
            return;
        }

        for(int k = i; k < j; k++) {
            if(i != k && nums[i] == nums[k]) continue;
            swap(nums[k], nums[i]);
            solve(nums, i+1, j, ans);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        solve(nums, 0, nums.size(), ans);
        return ans; 
    }
};