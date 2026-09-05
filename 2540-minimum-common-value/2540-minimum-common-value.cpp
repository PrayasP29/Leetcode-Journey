class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        int mini=INT_MAX;
        for(int i=0;i<nums1.size();i++){
                    st.insert(nums1[i]);
                }
        if(st.empty()){
            return -1;
        }
        for(auto i=0;i<nums2.size();i++){
            if(st.find(nums2[i]) != st.end()){
            mini=nums2[i];
            break;
            }
        }

        if(mini == INT_MAX) {
            return -1;
}
        return mini;
    }
};