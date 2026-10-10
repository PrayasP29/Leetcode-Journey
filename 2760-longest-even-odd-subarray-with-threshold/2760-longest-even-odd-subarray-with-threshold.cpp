class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size();
        int maxlen=0;
        int i=0;
        while(i<n){
            if(nums[i]>threshold || nums[i]%2!=0){
                i++;
                continue;
            }

            int start=i;
            i++;

            while(i<n&&nums[i]<=threshold&&nums[i]%2!=nums[i-1]%2){
                i++;
            }
            maxlen=max(maxlen,i-start);
        }
        return maxlen;
    }
};