class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0){
                nums[i]=nums.size()+1;
            }
        }
        for(int i=0;i<nums.size();i++){
              int x = abs(nums[i]);
             if(x >= 1 && x <= nums.size()){
                if(nums[x-1] > 0){
                    nums[x-1]=-nums[x-1];
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return nums.size() + 1;
    }
};