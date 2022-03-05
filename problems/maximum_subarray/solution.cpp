class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int sol = INT_MIN;
        for(int i = 0;i<nums.size(); i++){
            currSum+=nums[i];
            sol = max(sol,currSum);
            if(currSum<0){
                currSum = 0;
            }
        }
        return sol;
    }
};