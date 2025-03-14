class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt = 0, left = 0, maxL = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0)
                cnt++;
            while (cnt > k) {
                if (nums[left] == 0)
                    cnt--;
                left++;
            }
            maxL = max(maxL, right - left + 1);
        }
        return maxL;
    }
};