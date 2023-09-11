class Solution {
public:
    int countSegments(string s) {
        int count=0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] != ' ' and (i == 0 or s[i-1] == ' '))
                count++;
        }
        return count;
    }
};