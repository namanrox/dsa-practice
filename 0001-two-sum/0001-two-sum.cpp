class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i], reverse = target - n;
            if (mp.count(reverse)) {
                return {mp[reverse], i};
            }
            mp[n] = i;
        }
        return {};
    }
};