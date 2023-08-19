class Solution {
public:
    int partitionString(string s) {
        unordered_map<char, int> mp;
        int freq = 1;
        for(int i=0; i<s.size(); i++) {
            if(mp.count(s[i])) {
                freq++;
                mp.clear();
            }
            mp[s[i]] = i;
        }
        return freq;
    }
};