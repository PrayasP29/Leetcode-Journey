class Solution {
public:
    int reverseDegree(string s) {
        int degree=0;
        for(int i=0;i<s.size();i++){
            int value='z'-s[i]+1;
            int prod=value*(i+1);
            degree+=prod;
        }
        return degree;
    }
};