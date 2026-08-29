class Solution {
public:
    int hammingWeight(int n) {
        bitset<32>b1(n);
        int a = b1.count();
        return a;
    }
};