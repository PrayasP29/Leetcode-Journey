class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> missing;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                missing.push_back(i);
            }
        }
        return missing;
    }
};