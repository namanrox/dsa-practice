class Solution {
public:
    bool isPalindrome(int x) {
        long long num = x, rev = 0, digit;
        if(x < 0) {
            return false;
        }
        do {
             digit = x % 10;
             rev = (rev * 10) + digit;
             x /= 10;
         } while (x != 0);
        if(num == rev) {
            return true;
        }
        return false;
    }
};