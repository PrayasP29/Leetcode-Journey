class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;

        for(auto x:s){
            mp[x]++;
        }
        vector<pair<char,int>> v(mp.begin(),mp.end());

        sort(v.begin(),v.end(),[](auto &a,auto&b){
            return a.second>b.second;
        });
        string ans="";
        for(auto x:v){
            ans.append(x.second,x.first);
        }
        return ans;
    }
};