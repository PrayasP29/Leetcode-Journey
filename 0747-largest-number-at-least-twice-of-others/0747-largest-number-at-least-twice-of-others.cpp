class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maximum=INT_MIN;
        int maxindex=-1;

        for(int i=0;i<nums.size();i++){
            maximum=max(nums[i],maximum);

            if(maximum==nums[i]){
                maxindex=i;
            }
        }
        bool big=true;
        for(int i=0;i<nums.size();i++){
             if(nums[i] * 2 > maximum){
                if(nums[i] != maximum){
                    big = false;
                }
            }
        }
        if(big!=true){
            return -1;
        }
        return maxindex;
    }
};