class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smaller=0;
        int count=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target){
                smaller++;
            }
            if(nums[i]==target){
                count++;
            }
        }
        for(int i=0;i<count;i++){
            ans.push_back(smaller+i);
        }
        return ans;
    }
};