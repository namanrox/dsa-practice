class Solution {
public:
    string addBinary(string a, string b) {
        string add = "";
        int carry = 0, x = a.size()-1, y = b.size()-1;
        while(x >= 0 or y >= 0 or carry == 1) {
            carry += (x >= 0) ? a[x]-'0' : 0;
            carry += (y >= 0) ? b[y]-'0' : 0;
            add += carry%2 + '0';
            carry /= 2;
            x--, y--;
        }
        reverse(add.begin(), add.end());
        return add;
    }
};