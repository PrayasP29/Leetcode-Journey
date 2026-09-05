class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st;
        int n=candyType.size();
        int count=0;
        for(int i=0;i<n;i++){
            st.insert(candyType[i]);
        }
        int unique=st.size();
        int minimum=min(unique,n/2);
        return minimum;
    }
};