class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
        int end = 0;
        int v = 0;
        while(end < k) {
            if(vowel.count(s[end]) > 0) ++v;
            ++end;
        }
        
        int res = v;
        // sliding widnow invariant: [end -k, k) is the window and it has v vowels
        while(end < s.size()) {
            if(vowel.count(s[end - k]) > 0) --v;
            if(vowel.count(s[end]) > 0) {
                ++v;
                res = max(res, v);
            }
            ++end;
        }
        return res;
    }
};