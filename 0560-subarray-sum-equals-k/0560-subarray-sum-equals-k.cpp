class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), total = 0;
        for (int i = 0; i < n; i++) {
            int sum = nums[i];
            if(sum == k) {
                total++;
            }
            for (int j = i; j < n; j++) {
                sum += nums[i];
                if (sum == k) {
                    total++;
                }
            }
        }
        return total;
    }
};