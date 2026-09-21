class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0;i < nums.size();++i){
            int a = nums[i];
            sum2 += nums[i];
            while(a > 0){
                sum1 += (a % 10);
                a /= 10;
            }
        }
        return abs(sum1 - sum2);
    }
};