class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i]<=threshold){
            int j=i+1;
            int len=1;

            while(j<nums.size()){
                if(nums[j]<=threshold && nums[j]%2!=nums[j-1]%2){
                    len++;
                    j++;
                }
                else{
                    break;
                }
            }
            maxi=max(maxi,len);
        }
    }
        return maxi;
    }
};