class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1;

        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }

         for(int i=0;i<t.size();i++){
            m1[t[i]]--;

            if(s.size()!=t.size()){
                return false;
            }

            if(m1[t[i]]<0){
                return false;
            }
        }
        return true;
    }
};