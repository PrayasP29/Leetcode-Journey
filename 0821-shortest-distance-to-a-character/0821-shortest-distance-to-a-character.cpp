class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.length();
        int minDistance=INT_MAX;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int k=i;
            int j=i;
            int dist1=INT_MAX,dist2=INT_MAX;
            while(j>=0){
                if(s[j]==c){
                    dist1=abs(i-j);
                    break;
                }
                j--;
            }
            while(k<n){
                if(s[k]==c){
                    dist2=abs(i-k);
                    break;
                }
                k++;
            }
            ans.push_back(min(dist1,dist2));
        }
        return ans;
    }
};