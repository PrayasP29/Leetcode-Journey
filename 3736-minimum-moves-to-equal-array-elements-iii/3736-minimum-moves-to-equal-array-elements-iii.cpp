class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxnum=INT_MIN;
        for(int x:nums){
            maxnum=max(x,maxnum);
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            int diff=abs(nums[i]-maxnum);
            count+=diff;
        }
    return count;
    }
};