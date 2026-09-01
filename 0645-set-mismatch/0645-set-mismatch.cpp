class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int duplicate;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                duplicate=nums[i];
                break;
            }
        }
        ans.push_back(duplicate);

        int x=0;

        for(int i=1;i<=nums.size();i++){
            x^=i;
        }

        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }

        int missing=x^duplicate;
        ans.push_back(missing);
        return ans;
    }
};