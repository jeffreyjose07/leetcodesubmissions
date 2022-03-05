class Solution {
public:
    int minStairs(int i , vector<int>& cost, vector<int>& dp){
        if(dp[i]==-1)
            dp[i]=cost[i]+min(minStairs(i-1,cost,dp),minStairs(i-2,cost,dp));
        return dp[i];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int s = cost.size();
        vector<int>dp(s,-1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        minStairs(s-1,cost,dp);
        return min(dp[s-1],dp[s-2]);
    
    }
};