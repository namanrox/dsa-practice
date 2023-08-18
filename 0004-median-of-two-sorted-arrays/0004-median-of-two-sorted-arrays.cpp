class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(auto i: nums1) {
            arr.push_back(i);
        }
        for(auto i: nums2) {
            arr.push_back(i);
        }
        int x = arr.size();
        sort(arr.begin(), arr.end());
        return x%2 ? arr[x/2] : (arr[x/2 - 1] + arr[x/2])/2.0;
    }
};