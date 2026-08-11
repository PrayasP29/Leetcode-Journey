class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool>ok;
        int n=candies.size();
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxCandies){
                ok.push_back(true);
            }
            else{
                ok.push_back(false);
            }
        }
        return ok;
    }
};