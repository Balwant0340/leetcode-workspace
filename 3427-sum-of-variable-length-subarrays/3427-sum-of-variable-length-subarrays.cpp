class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector<int>prefix(nums.size());
        prefix[0] = nums[0];
        for(int i = 1; i < nums.size();++i){
            prefix[i] = nums[i] + prefix[i-1];
        }
        int sum = nums[0];
        for(int i = 1; i < nums.size();++i){
            sum += (prefix[i] - prefix[max(0,i - nums[i])] + nums[max(0,i - nums[i])]);
        }
        return sum;
    }
};