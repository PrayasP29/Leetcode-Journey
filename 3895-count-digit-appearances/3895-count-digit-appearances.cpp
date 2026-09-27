class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                int rem=nums[i]%10;
                mp[rem]++;
                nums[i]/=10;
            }
        }
        auto it=mp.find(digit);

        if(it!=mp.end()){
            return it->second;
        }
        return 0;
    }
};