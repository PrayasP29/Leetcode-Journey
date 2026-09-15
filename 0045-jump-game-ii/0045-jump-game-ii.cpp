class Solution {
public:
    int jump(vector<int>& nums) {
        int count=0;
        int end=0;
        int far=0;

        for(int i=0;i<nums.size()-1;i++){
            far=max(i+nums[i],far);

            if(i==end){
                count++;
                end=far;
            }
        }
        return count;
    }
};