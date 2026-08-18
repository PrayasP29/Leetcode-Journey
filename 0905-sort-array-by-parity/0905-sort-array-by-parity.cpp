class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> pair;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]%2==0){
                pair.push_back(nums[i]);
            }
        }

        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]%2!=0){
                pair.push_back(nums[i]);
            }
        }
        return pair;
    }
};