class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            dp[i]=INT_MAX;
            for(int j=1;j*j<=i;j++){
                int square=j*j;
                int remaining=i-square;

                dp[i]=min(dp[i],1+dp[remaining]);
            }
        }
        return dp[n];
    }
};