class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<int,int> mp;
        for(auto i=0;i<sentence.size();i++){
            if(sentence[i]-'a'<=25){
                mp[sentence[i]]++;
            }
        }
        return mp.size()==26;
    }
};