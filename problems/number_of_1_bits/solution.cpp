class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bit = 0, result = 0;
        while(n!=0){
            result += (n%2);
            n=n>>1;
        }
        return result;
    }
};