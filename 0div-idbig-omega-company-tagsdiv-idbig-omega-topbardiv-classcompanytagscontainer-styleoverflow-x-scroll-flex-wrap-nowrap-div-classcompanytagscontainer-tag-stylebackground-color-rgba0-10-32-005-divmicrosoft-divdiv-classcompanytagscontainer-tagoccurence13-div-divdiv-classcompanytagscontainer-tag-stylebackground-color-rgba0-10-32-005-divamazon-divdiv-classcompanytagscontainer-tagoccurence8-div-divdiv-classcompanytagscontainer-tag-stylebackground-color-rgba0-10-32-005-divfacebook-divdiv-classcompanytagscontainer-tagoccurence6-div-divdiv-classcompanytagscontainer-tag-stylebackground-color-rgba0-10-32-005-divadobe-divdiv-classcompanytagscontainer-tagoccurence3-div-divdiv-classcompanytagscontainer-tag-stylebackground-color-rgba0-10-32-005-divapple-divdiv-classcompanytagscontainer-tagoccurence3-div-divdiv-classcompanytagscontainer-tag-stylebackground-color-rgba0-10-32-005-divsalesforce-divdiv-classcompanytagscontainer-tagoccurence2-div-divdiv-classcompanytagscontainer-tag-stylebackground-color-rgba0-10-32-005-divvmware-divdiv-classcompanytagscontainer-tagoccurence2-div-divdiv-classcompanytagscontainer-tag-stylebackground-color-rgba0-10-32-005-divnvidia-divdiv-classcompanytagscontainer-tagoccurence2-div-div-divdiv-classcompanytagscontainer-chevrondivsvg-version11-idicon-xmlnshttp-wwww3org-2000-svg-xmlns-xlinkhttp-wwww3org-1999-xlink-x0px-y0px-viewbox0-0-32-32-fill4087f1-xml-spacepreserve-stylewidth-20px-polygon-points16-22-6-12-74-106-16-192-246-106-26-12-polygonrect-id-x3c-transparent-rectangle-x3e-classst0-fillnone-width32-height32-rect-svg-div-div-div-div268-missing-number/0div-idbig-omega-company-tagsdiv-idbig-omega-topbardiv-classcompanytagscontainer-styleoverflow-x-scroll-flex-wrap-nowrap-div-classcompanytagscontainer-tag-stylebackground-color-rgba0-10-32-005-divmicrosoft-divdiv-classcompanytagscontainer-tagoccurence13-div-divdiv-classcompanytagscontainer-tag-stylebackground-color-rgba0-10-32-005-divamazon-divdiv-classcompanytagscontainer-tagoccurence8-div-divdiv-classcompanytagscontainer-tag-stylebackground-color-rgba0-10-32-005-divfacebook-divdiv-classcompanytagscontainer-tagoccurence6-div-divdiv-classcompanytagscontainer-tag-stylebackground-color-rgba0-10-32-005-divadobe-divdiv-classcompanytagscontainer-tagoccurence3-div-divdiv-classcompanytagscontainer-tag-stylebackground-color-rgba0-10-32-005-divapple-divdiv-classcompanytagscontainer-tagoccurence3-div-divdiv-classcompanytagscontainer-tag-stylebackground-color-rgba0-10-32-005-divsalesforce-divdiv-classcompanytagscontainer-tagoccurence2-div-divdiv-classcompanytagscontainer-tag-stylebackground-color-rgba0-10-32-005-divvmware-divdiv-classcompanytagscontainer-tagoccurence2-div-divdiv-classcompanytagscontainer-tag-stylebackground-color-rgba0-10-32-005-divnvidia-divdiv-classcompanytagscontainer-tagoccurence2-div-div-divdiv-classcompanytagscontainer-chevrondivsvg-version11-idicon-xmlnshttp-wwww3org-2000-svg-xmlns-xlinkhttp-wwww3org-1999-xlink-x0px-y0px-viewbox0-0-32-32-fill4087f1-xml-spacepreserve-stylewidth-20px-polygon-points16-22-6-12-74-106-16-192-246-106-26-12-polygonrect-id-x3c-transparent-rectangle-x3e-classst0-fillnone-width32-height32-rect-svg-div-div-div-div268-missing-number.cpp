class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), total = n*(n+1)/2, sum = 0;
        for(int i=0; i<n; i++) sum += nums[i];
        return total-sum;
    }
};