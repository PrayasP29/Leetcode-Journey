class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int black=0;
        int Whitecount=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                Whitecount++;
            }
        }
        int minWhite=Whitecount;
        for(int i=k;i<blocks.size();i++){
            if(blocks[i]=='W'){
                Whitecount++;
            }
            if(blocks[i-k]=='W'){
                Whitecount--;
            }
            minWhite=min(Whitecount,minWhite);
        }
        return minWhite;
    }
};