class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int bitOR = 0;
        for (int num : nums) {
            bitOR |= num;
        }
        return bitOR << (nums.size() - 1);
    }
};