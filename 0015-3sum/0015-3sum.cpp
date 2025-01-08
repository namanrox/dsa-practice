class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplet;
        if (n < 3)
            return {};
        for (int i = 0; i < n - 2; i++) {
            if (nums[i] > 0)
                break;
            if (i > 0 and nums[i - 1] == nums[i])
                continue;
            int j = i + 1, k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                    j++;
                else if (sum > 0)
                    k--;
                else {
                    triplet.push_back({nums[i], nums[j], nums[k]});
                    while (j < k and nums[j] == nums[j + 1])
                        j++;
                    j++;
                    while (j < k and nums[k - 1] == nums[k])
                        k--;
                    k--;
                }
            }
        }
        return triplet;
    }
};