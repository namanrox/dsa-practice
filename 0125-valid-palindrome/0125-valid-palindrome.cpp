class Solution {
public:
    bool isPalindrome(string s) {
        for(int start=0, end=s.length()-1; start<end; start++, end--) {
            while(start<end and !isalnum(s[start]))
                start++;
            while(start<end and !isalnum(s[end]))
                end--;
            if(tolower(s[start]) != tolower(s[end]))
                return false;
        }
        return true;
    }
};