class Solution {
public:
    int maxDepth(string s) {
        int max_depth = 0, curr = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                curr++;
                max_depth = max(curr, max_depth);
            } else if (s[i] == ')')
                curr -= 1;
        }
        return max_depth;
    }
};