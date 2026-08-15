class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int j=0;

        while(j<arr.size()){
            if(arr[j]!=0){
                j++;
            }else if(arr[j]==0){
                for(int i=arr.size()-1;i>j;i--){
                    arr[i]=arr[i-1];
                }
                if(j+1<arr.size()){
                    arr[j+1]=0;
                }
                j+=2;
            }
        }
    }
};