class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       vector<int> temp=score;
       vector<string> ans(score.size());
       sort(temp.begin(),temp.end(),greater<int>());
       map<int,int> mp;

       for(int i=0;i<score.size();i++){
        mp[score[i]]=i;
       }

       for(int i=0;i<temp.size();i++){
        int index=mp[temp[i]];

        if(i==0)
        ans[index]="Gold Medal";

        else if(i==1)
        ans[index]="Silver Medal";

        else if(i==2)
        ans[index]="Bronze Medal";

        else
        ans[index]=to_string(i+1);
       }
       return ans;
    }
};