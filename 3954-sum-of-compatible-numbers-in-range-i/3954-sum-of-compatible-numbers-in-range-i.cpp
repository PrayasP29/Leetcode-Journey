class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum=0;
        if(n==0) return 0;
        for(int x=1;x<=n+k;x++){
            if(abs(x-n)<=k && ((n & x) == 0)){
                sum+=x;
            }
        }
        return sum;
    }
};