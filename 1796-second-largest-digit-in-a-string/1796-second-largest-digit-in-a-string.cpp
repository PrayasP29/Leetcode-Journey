class Solution {
public:
    int secondHighest(string s) {
        int maximum=INT_MIN;
        int second=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                int digit=s[i]-'0';

                if(digit>maximum){
                second=maximum;
                maximum=digit;
            }
            else if(digit>second && digit!=maximum){
                second=digit;
            }
            }
        }
         if(second==INT_MIN){
                return -1;
            }
        return second;
    }
};