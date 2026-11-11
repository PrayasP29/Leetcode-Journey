class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        int sum=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second%k==0){
                sum=sum+(it->first*it->second);
            }
        }
        return sum;
    }
};