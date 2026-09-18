class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int del=arr.size()*0.05;
        arr.erase(arr.begin(),arr.begin()+del);
        arr.erase(arr.end()-del,arr.end());
        double sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        double mean=sum/arr.size();
        return mean;
    }
};