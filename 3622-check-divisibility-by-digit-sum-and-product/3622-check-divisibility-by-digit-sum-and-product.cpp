class Solution {
public:

    int totalsum(int n){
    int rem=0;
    int sum=0;
    int product=1;

    while(n>0){
        rem=n%10;
        sum+=rem;
        product*=rem;
        n/=10;
    }
    return sum+product;
}

    bool checkDivisibility(int n) {
        if(n%totalsum(n)==0)
        return true;

    return false;
    }
};