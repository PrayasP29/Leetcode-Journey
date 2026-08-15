class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int square=pow(nums[i],2);
            result.push_back(square);
        }
        sort(result.begin(),result.end());
        return result;
    }
};