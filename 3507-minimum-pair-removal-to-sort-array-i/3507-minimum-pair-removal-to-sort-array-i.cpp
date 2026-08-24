class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count=0;
        while(!is_sorted(nums.begin(),nums.end())){
            int mini = INT_MAX;
            int index=-1;
            for(int i = 0; i < nums.size() - 1; i++) {
                int first = nums[i];
                int second = nums[i + 1];
                int sum=first+second;

                if(sum<mini){
                    mini=sum;
                    index=i;
                }
                }
                nums[index] = nums[index] + nums[index + 1];
                nums.erase(nums.begin() + index + 1);
                count++;
        }
        return count;
    }
};