class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long long num = 0;
        while (i < s.size() and s[i] == ' ')
            i++;
        if (i < s.size() and (s[i] == '+' or s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            else
                sign = 1;
            i++;
        }
        while (s.length() and isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            if (num * sign <= INT_MIN)
                return INT_MIN;
            if (num * sign >= INT_MAX)
                return INT_MAX;
            i++;
        }
        return num * sign;
    }
};