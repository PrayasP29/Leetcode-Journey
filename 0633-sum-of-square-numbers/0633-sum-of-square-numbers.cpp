class Solution {
public:
    bool judgeSquareSum(int c) {
        int n= sqrt(c);
        int j=0;

        while(j<=n){
        long long sum = 1LL * n * n + 1LL * j * j;

            if(sum==c){
                return true;
            }
            else if(sum<c){
                j++;
            }
            else{
                n--;
            }
        }
        return false;
    }
};