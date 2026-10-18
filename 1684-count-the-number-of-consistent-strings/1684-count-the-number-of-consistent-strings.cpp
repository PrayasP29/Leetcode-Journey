class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(auto x:words){
            bool valid=true;

            for(auto ch:x){
                if(allowed.find(ch)==string::npos){
                    valid=false;
                    break;
                }
            }
            if(valid){
                count++;
            }
        }
        return count;
    }
};