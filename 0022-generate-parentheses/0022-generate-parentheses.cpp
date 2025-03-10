class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int open = n, close = n;
        vector<string> gen;
        string s = "";
        func(s, open, close, gen);
        return gen;
    }
    void func(string s, int open, int close, vector<string>& gen) {
        if (open == 0 and close == 0) {
            gen.push_back(s);
            return;
        }
        if (open == close) {
            string s1 = s;
            s1.push_back('(');
            func(s1, open - 1, close, gen);
        } else if (open == 0) {
            string s1 = s;
            s1.push_back(')');
            func(s1, open, close - 1, gen);
        } else if (close == 0) {
            string s1 = s;
            s1.push_back('(');
            func(s1, open - 1, close, gen);
        } else {
            string s1 = s, s2 = s;
            s1.push_back('(');
            s2.push_back(')');
            func(s1, open - 1, close, gen);
            func(s2, open, close - 1, gen);
        }
    }
};