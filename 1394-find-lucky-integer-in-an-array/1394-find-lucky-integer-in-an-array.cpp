class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        int happy=-1;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->first==it->second){
                happy=max(it->second,happy);
            }
        }
        return happy;
    }
};