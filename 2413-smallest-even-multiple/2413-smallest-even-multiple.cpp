class Solution {
public:
    int smallestEvenMultiple(int n) {
        int k=std::lcm(n,2);
        return k;
    }
};