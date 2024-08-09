class Solution {
public:
    string reverseWords(string s) {
        int n = s.size(), left = 0, right = 0;
        reverse(s.begin(), s.end());
        for (int i = 0; i < n; i++) {
            while(i<n and s[i] == ' ') i++;
            if(i==n) break;
            while (i<n and s[i] != ' ')
                s[right++] = s[i++];
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
        }
        s.resize(right - 1);
        return s;
    }
};