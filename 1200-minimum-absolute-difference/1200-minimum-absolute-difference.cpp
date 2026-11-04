class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
       int target=INT_MAX;
       for(int i=0;i<arr.size()-1;i++){
        int diff=arr[i+1]-arr[i];
        if(diff<target){
            target=diff;
        }
       }
       vector<vector<int>> ans;
       for(int i=0;i<arr.size()-1;i++){
        if(arr[i+1]-arr[i]==target){
            ans.push_back({arr[i],arr[i+1]});
        }
       }
       return ans;
    }
};