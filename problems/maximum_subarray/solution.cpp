class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int runSum = nums[0];
        int maxSum = nums[0];
        for(int i=1;i<nums.size();i++){
            if (runSum < 0)
            {
                runSum = 0;
            }
            
            runSum = runSum + nums[i];
            
            if (runSum > maxSum)
            {
                maxSum = runSum;
            }
        }
        return maxSum;
    }
};