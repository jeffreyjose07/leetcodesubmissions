class Solution {
public:
    int noOfWays(int n, vector<int>& dp){
        if(n<=2){
            dp[n]=n;
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = (noOfWays(n-1,dp)+noOfWays(n-2,dp));
        return dp[n];
    }
    
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return noOfWays(n,dp);
    }
};