class Solution {
public:
    int characterReplacement(string s, int k) {
        int len = 0;
        for (auto i = 'A'; i <= 'Z'; i++)
            len = max(len, func(s, k, i));
        return len;
    }
    int func(string s, int k, char c) {
        int cnt = 0, maxi = 0;
        for (int i = 0, j = 0; i < s.size(); i++) {
            if (s[i] != c)
                cnt++;
            while (cnt > k) {
                if (s[j] != c)
                    cnt--;
                j++;
            }
            maxi = max(maxi, i - j + 1);
        }
        return maxi;
    }
};