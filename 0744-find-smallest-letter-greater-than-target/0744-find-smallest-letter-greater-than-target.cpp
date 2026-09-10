class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int x=target;

        for(int i=0;i<letters.size();i++){
            int y= letters[i];

            if(y>x){
                char c=(char)y;
                return c;
            }
        }
        return letters[0];
    }
};