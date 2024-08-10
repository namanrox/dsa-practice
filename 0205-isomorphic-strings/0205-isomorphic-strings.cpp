class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1 = s.length(), n2 = t.length();
        vector<int> s_new(5*1e4, 0);
        vector<int> t_new(5*1e4, 0);
        if(n1 != n2) return false;
        for(int i=0; i<n1; i++) {
            if(s_new[s[i]] != t_new[t[i]]) return false;
            s_new[s[i]] = i+1;
            t_new[t[i]] = i+1;
        }
        return true;
    }
};