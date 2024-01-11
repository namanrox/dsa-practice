class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size(), tmp = 0;
        string s = ""; 
        for(int i=n-1; i>=0; i--) {
            if((num[i]-'0') & 1 != 0) tmp = 1; 
            if(tmp == 1) s += num[i]; 
        }
        reverse(s.begin(), s.end());
        return s;
    }
};