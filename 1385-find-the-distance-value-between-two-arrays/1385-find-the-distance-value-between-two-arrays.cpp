class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
         int count=0;
        for(int i=0;i<arr1.size();i++){
            bool valid=true;
            for(int j=0;j<arr2.size();j++){
                if(abs(arr2[j]-arr1[i])<=d){
                    valid=false;
                    break;
                }
            }
            if(valid==true){
                count++;
            }
        }
        return count;
    }
};