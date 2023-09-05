class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> str;
        int maxL=0, left=0, right=0;
        while(right < s.size()) {
            if(str.find(s[right]) == str.end()) {
                str.insert(s[right]);
                maxL = max(maxL, right-left+1);
                right++;
            } else {
                str.erase(s[left]);
                left++;
            }
        }
        return maxL;
    }
};