class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<8> binary1(start); 
        bitset<8> binary2(goal);
        int count = 0;
        for(int i=0; i<binary1.size(); i++) {
            if(binary1[i] != binary2[i]) count++;
        }
        return count;
    }
};