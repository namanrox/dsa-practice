class Solution {
public:
    bool checkValidString(string s) {
        int left = 0, right = 0;
        for(auto ch: s) {
            if(ch == '(') {
                left++;
                right++;
            } else if(ch == ')') {
                left--;
                right--;
            } else {
                left--;
                right++;
            }
            if(right < 0) return false;
            if(left < 0) left = 0;
        }
        if(left == 0) return true;
        return false;
    }
};