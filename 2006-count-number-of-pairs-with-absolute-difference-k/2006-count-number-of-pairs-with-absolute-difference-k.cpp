class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        long long count=0;
        for(int i=0;i<nums.size()-1;i++){
            int j=i+1;
            while(j<nums.size()){
                if(abs(nums[i]-nums[j])==k){
                    count++;
                }
                j++;
            }
        }
        return count;
    }
};