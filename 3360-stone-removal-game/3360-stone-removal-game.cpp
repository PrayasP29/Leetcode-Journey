class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10){
            return false;
        }
        int stones=10;
        bool aliceturn=true;
        while(n>=stones){
            n-=stones;
            stones--;
            aliceturn=!aliceturn;
        }
        return !aliceturn;
    }
};