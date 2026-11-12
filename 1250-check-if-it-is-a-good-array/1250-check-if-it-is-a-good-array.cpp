class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int all_gc=nums[0];
        for(int i=1;i<nums.size();i++){
            all_gc=std::gcd(all_gc,nums[i]);
        }
        if(all_gc==1){
            return true;
        }
        return false;
    }
};