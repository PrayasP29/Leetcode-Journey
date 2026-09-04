class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(auto i:arr){
            mp[i]++;
        }

        for(auto it1=mp.begin();it1!=mp.end();it1++){
            for(auto it2=next(it1);it2!=mp.end();it2++){
                if(it1->second==it2->second){
                    return false;
                    break;
                }
            }
        }
        return true;
    }
};