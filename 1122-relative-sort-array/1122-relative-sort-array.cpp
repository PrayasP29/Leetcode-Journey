class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        for(int i:arr1){
            mp[i]++;
        }
        vector<int> ans;

        for(int i:arr2){
            while(mp[i]>0){
                ans.push_back(i);
                mp[i]--;
            }
        }
        vector<int>remaining;
         for(auto it : mp) {
            while(it.second > 0) {
                remaining.push_back(it.first);
                it.second--;
            }
        }
        sort(remaining.begin(),remaining.end());

        for(int i:remaining){
            ans.push_back(i);
        }
        return ans;
    }
};