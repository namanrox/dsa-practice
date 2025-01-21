class Solution {
public:
    int minAddToMakeValid(string s) {
        int tmp1 = 0, tmp2 = 0;
        for(auto ch: s) {
            if(ch == '(') tmp1++;
            if(ch == ')') {
                if(tmp1 <= 0) tmp2++;
                else tmp1--;
            }
        }
        return tmp1 + tmp2;
    }
};