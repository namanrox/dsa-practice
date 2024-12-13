class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = s.size(), m = g.size();
        if(n == 0) return 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0, cookie = n-1, child = m-1;
        while(cookie >= 0 and child >=0) {
            if(s[cookie] >= g[child]) {
                count++;
                cookie--;
                child--;
            }
            else{
                child--;
            }
        }
        return count;
    }
};