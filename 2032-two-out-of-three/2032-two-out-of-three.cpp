class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        for(int x:nums1){
            if((find(nums2.begin(),nums2.end(),x)!=nums2.end()||
            find(nums3.begin(),nums3.end(),x)!=nums3.end())&&
            find(ans.begin(),ans.end(),x)==ans.end()){
                ans.push_back(x);
            }
        }
         for(int x:nums2){
            if((find(nums1.begin(),nums1.end(),x)!=nums1.end()||
            find(nums3.begin(),nums3.end(),x)!=nums3.end())&&
            find(ans.begin(),ans.end(),x)==ans.end()){
                ans.push_back(x);
            }
        }
        return ans;
    }
};