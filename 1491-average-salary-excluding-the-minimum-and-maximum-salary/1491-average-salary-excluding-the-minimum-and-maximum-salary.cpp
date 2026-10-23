class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        sort(salary.begin(),salary.end());
        double totalsalary=0;
        for(int i=1;i<=n-2;i++){
            totalsalary+=salary[i];
        }
        return totalsalary/(n-2);
    }
};