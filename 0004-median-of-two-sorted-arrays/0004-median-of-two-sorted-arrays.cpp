class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i:nums1) ans.push_back(i);
        for(int i:nums2) ans.push_back(i);
        sort(ans.begin(),ans.end());
        int n=ans.size();

        if(n%2!=0){
            return ans[n/2];
        }
        return (ans[n/2-1]+ans[n/2])/2.0;
    }
};