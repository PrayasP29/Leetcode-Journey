class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
    int m = nums2.size();
    sort(nums2.begin(), nums2.end());
    vector<int> v;

    for(int i=0;i<n;i++){
        int low2 = 0;
        int high2 = m - 1;
        while(low2<=high2){
            int mid2=(low2+high2)/2;
            if(nums2[mid2]==nums1[i]){
                if(find(v.begin(), v.end(), nums1[i]) == v.end()){
                v.push_back(nums1[i]);
                }
                break;
            }
            else if(nums2[mid2]<nums1[i]){
                 low2=mid2+1;
            }
            else{
                high2=mid2-1;
            }
        }
    }
    return v;
    }
};