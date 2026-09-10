class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int j=0;
        for(int i=0;i<nums1.size();i++){
            auto it=find(nums2.begin(),nums2.end(),nums1[i]);

            if(it!=nums2.end()){
                j=it-nums2.begin();
            }
            bool found=false;
        for(int k=j+1;k<nums2.size();k++){
            if(nums2[k]>nums2[j]){
                ans.push_back(nums2[k]);
                found=true;
                break;
            }
        }

        if(!found){
            ans.push_back(-1);
        }
        } 
        return ans;
    }
};