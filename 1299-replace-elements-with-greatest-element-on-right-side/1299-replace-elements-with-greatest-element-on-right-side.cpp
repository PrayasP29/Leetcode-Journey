class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int j=i+1;
            int maxi=-1;
            while(j<arr.size()){
                maxi=max(maxi,arr[j]);
                j++;
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};