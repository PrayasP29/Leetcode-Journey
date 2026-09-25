class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> ans;
        unordered_set<int> s;
        int a=1;

        while(a<=bound){
            int b=1;

            while(b<=bound){
                int sum=a+b;

                if(sum<=bound){
                    s.insert(sum);
                }
                if(y==1)
                break;
                b*=y;
            }
            if(x==1)
            break;
            a*=x;
        }
        for(int x:s){
            ans.push_back(x);
        }
        return ans;
    }
};