class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int j=0;
        int minimum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                minimum=min(minimum,i-j+1);
                sum-=nums[j];
                j++;
            }
            }
            if(minimum==INT_MAX){
                return 0;
        }
        return minimum;
    }
};