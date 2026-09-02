class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int count=0;
        int total=0;
        double avg;
        for(int i=1;i<salary.size()-1;i++){
            total+=salary[i];
        }
        return (double)total/(salary.size()-2);
    }
};