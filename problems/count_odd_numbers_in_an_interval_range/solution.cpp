class Solution {
public:
    int countOdds(int low, int high) {
        int count = (high-low)/2;
        if(low%2){
            count+=1;
        }else if(high%2){
            count+=1;
        }
        return count;
    }
};