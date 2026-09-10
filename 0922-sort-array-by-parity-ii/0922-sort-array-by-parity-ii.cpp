class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans;
        int j=1;
        for(int i=0;i<nums.size();i++){
                if(nums[i]%2!=i%2){

                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]%2== i%2){
                        swap(nums[i], nums[j]);
                        break;
                    }
                }
            }
    }
    return nums;    
    }
};