class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i: nums){
            mp[i]++;
        }
        vector<int> ans;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==2){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};