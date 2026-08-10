class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int count=0;
        for(int i=0;i<rows;i++){
                int low=0;
                int end=cols-1;
                int first_neg=cols;
                while(low<=end){
                    int mid=low+(end-low)/2;

                    if(grid[i][mid]<0){
                        first_neg=mid;
                        end=mid-1;
                    }
                    else{
                        low=mid+1;
                    }
                }
                count+=(cols-first_neg);
            }
        return count;
    }
};