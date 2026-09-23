class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int> count(10,0);

        int temp=n;
        int digits=0;
        while(temp>0){
            count[temp%10]++;
            temp/=10;
            digits++;
        }

        for(int i=1;i<=1000000000;i*=2){
            vector<int> countp(10,0);
            int x=i;

            while(x>0){
                countp[x%10]++;
                x/=10;
            }
            if(count==countp){
                return true;
            }
        }
        return false;
    }
};