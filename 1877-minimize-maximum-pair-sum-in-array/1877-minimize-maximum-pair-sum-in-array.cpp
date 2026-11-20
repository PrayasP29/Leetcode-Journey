class Solution {
public:
    int minPairSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int j=n-1;
       int maxi=INT_MIN;    
       for(int i=0;i<n/2;i++){
        int sum=0;
        sum+=nums[i]+nums[j];
        j--;
        maxi=max(maxi,sum);
       } 
       return maxi;
    }
};