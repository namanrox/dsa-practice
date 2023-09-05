class Solution {
public:
    int mySqrt(int x) {
        if(x == 1) 
            return x;
        unsigned int a = 1, b = x;
        while(a < b) {
            unsigned int c = (a+b)/2;
            if(c > x/c) 
                b = c;
            else
                a = c+1;
        }
        return a-1;
    }
};