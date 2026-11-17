class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int sum=0;
            while(n>0){
                int rem=n%10;
                sum+=rem;
                n/=10;
            }
            nums[i]=sum;
        }
        int mini=INT_MAX;
        for(int x:nums){
            mini=min(mini,x);
        }
        return mini;
    }
};