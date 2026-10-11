class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
      int n =nums.size();
      long long sum=0;
      for(int x=0;x<nums.size();x++){
        if(n%(x+1)==0){
            int sqr=nums[x]*nums[x];
            sum+=sqr;
        }
      }  
      return sum;
    }
};