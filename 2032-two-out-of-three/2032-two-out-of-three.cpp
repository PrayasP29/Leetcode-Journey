class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());
        unordered_set<int> s3(nums3.begin(),nums3.end());

        unordered_set<int> val;

        for(int x:nums1) val.insert(x);
        for(int x:nums2) val.insert(x);
        for(int x:nums3) val.insert(x);

        for(int x:val){
            int count =0;

            if(s1.count(x)) count++;
            if(s2.count(x)) count++;
            if(s3.count(x)) count++;

            if(count>=2){
                ans.push_back(x);
            }
        }
        return ans;
    }
};