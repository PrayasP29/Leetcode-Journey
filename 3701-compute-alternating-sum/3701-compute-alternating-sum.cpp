class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                sum+=nums[i];
            }
            else{
                sum2+=nums[i];
            }
        }
        return sum-sum2;
    }
};