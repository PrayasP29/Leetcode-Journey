class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }

        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>1){
                return it->first;
            }
        }
        return -1;
    }
};