class Solution {
public:
    int jump(vector<int>& nums) {
        int target=nums.size()-1;
        int count=0;
        while(target!=0){
            for(int i=0;i<target;i++){
                if(i+nums[i]>=target){
                    target=i;
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};