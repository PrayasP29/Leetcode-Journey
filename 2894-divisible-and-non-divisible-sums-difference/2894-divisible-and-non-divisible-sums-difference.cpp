class Solution {
public:
    int differenceOfSums(int n, int m) {
        long long divsum=0;
        long long nondiv=0;
        int i=1;
        while(i<=n){
            if(i%m==0){
                divsum+=i;
            }else{
                nondiv+=i;
            }
            i++;
        }
        return nondiv-divsum;
    }
};