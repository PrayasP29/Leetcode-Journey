class Solution {
public:
    bool solve(int n,vector<int> &dp){
        if(dp[n]!=-1){
            return dp[n];
        }
        if(n==1) return false;
        if(n==2) return true;

        for(int x=1;x<n;x++){
            if(n%x==0){
                if(!solve(n-x,dp)){
                    return dp[n]=true;
                }
            }
        }
        return dp[n]=false;
    }
    bool divisorGame(int n) {
        vector<int> dp(n+1,-1);

        return solve(n,dp);
    }
};