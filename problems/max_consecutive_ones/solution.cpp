class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;
        for(int i=0;i<nums.capacity();i++){
            if(nums[i]==1){
                currentCount++;
            }else{
                if(currentCount>maxCount)
                    maxCount = currentCount;
                currentCount = 0;
            }
        }
        if(maxCount < currentCount){
            maxCount = currentCount;
        }
        return maxCount;
    }
};