class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> mp;
        int freq=0;

        for(auto i=0;i<arr.size();i++){
            freq=mp[arr[i]]++;
        }

        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>arr.size()/4){
                return it->first;
            }
        }
        return -1;
    }
};