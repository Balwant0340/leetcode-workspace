class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int Xor = 0;
        bool zero = true;
        for(int i = 0;i < nums.size(); ++i){
            Xor ^= nums[i];
            if(nums[i] != 0){
                zero = false;
            }
        }
        if(Xor != 0){
            return nums.size();
        }
        if(zero == false && Xor == 0){
            return nums.size() - 1;
        }
        return 0;
    }
};