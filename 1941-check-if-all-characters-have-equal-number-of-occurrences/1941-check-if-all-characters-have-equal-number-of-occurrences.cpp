class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(auto i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int target=mp.begin()->second;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second!=target){
                return false;
            }
        }
        return true;
    }
};