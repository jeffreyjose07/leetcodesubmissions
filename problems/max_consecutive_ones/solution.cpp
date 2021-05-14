class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsecutiveCount = 0,currentCount = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==1){
                currentCount++;
                if(currentCount>maxConsecutiveCount){
                    maxConsecutiveCount = currentCount;
                }
            } else{
                if(currentCount>maxConsecutiveCount){
                    maxConsecutiveCount = currentCount;
                }
                currentCount = 0;
            }           
        }
        return maxConsecutiveCount;
    }
};