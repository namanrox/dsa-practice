class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int> path;
        set(nums, 0, path, subsets);
        return subsets;
    }
    void set(vector<int>& nums, int index, vector<int>& path,
             vector<vector<int>>& subsets) {
        subsets.push_back(path);
        for (int i = index; i < nums.size(); i++) {
            path.push_back(nums[i]);
            set(nums, i + 1, path, subsets);
            path.pop_back();
        }
    }
};