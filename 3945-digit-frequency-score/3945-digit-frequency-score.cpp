class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> mp;

        while(n>0){
            int rem=n%10;
            mp[rem]++;
            n/=10;
        }
        int sum=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            int prod=1;
            prod=it->first*it->second;
            sum+=prod;
        }
        return sum;
    }
};