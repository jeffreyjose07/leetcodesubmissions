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
        vector<int>dp1(s-1,-1);
        vector<int>dp2(s-1,-1);
        if(s==1){
            return nums[0];
        }
        if(s==2){
            return max(nums[0],nums[1]);
        }
        vector<int>nums2(s-1);
        for(int i = 0;i<s-1;i++){
            nums2[i]=nums[i+1];
        }
        dp1[0] = nums[0];
        dp1[1] = max(nums[0],nums[1]);
        dp2[0] = nums[1];
        dp2[1] = max(nums[1],nums[2]);
        return max(robber(s-2,nums,dp1),robber(s-2,nums2,dp2));
    }
};