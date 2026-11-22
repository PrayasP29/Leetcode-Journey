class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evensum=0,oddsum=0;
        for(int i=1;i<n*2;i++){
            if(i%2==0){
                evensum+=i;
            }
            else{
                oddsum+=i;
            }
        }
        return std::gcd(evensum,oddsum);
    }
};