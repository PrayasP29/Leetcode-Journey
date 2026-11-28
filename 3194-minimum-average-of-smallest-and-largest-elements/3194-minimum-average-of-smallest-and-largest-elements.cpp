class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int j=n-1;
        double mini=INT_MAX;
        for(int i=0;i<n/2.0;i++){
            double sum=0;
            sum=(nums[i]+nums[j])/2.0;
            mini=min(mini,sum);
            j--;
        }
        return mini;
    }
};