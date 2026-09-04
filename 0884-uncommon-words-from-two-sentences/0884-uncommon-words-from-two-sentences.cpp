class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string combined= s1+" "+s2;
        stringstream ss(combined);
        string word;
        unordered_map<string,int> mp;
        vector<string> ans;
        int freq;
        while(ss>>word){
            freq=mp[word]++;
        }
        for(auto it:mp){
         if(it.second==1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};