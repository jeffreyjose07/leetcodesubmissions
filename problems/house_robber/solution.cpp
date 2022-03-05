class Solution {
public:
    int robber(int i, vector<int>& nums, vector<int>& dp){
        if(dp[i]==-1){
            dp[i] = max(robber(i-1,nums,dp),nums[i]+robber(i-2,nums,dp));
        }
        return dp[i];
    }
    
    int rob(vector<int>& nums) {
        int s = nums.size();
        vector<int>dp(s,-1);
        if(s==1){
            return nums[0];
        }
        dp[0] = nums[0];
        if(s==2){
            return max(nums[0],nums[1]);
        }
        dp[1] = max(nums[0],nums[1]);
        return robber(s-1,nums,dp);
    }
};