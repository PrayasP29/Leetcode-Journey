class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> st(nums.begin(),nums.end());
        int longest=1;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int current=x;
                int count=1;

            while(st.find(current+1)!=st.end()){
                current++;
                count++;
            }
            longest=max(longest,count);
        }
        } 
        return longest;
    }
};