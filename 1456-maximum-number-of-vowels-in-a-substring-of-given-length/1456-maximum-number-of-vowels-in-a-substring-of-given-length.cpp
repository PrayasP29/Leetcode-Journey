class Solution {
public:
    int maxVowels(string s, int k) {
        int Vowelcount=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' ||
            s[i]=='u'){
                Vowelcount++;
            }
        }
        int maxVowel=Vowelcount;

        for(int i=k;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' ||
            s[i]=='u'){
                Vowelcount++;
        }   if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i'|| s[i-k]=='o' ||
            s[i-k]=='u'){
                Vowelcount--;
            }
            maxVowel=max(maxVowel,Vowelcount);
        }
        return maxVowel;
    }
};