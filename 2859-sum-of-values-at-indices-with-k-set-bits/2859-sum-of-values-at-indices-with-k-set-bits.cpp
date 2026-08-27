class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i < nums.size();++i){
            bitset<32> bit(i);
            int m = 0;
            for(int j = 0; j < 32;++j){
                if(bit[j] == 1) m++;
            }
            if(m == k)sum += nums[i];
        }
        return sum;
    }
};