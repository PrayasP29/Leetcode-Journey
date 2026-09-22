class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i=nums.size();i>=0;i--){
            return nums[i-k];
        }
        return -1;
    }
};