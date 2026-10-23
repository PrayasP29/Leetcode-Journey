class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0;
        int mini=INT_MAX;
        for(int x:prices){
            mini=min(mini,x);
            maxProfit=max(maxProfit,x-mini);
        }
        return maxProfit;
    }
};