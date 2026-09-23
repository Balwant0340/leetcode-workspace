class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double average = (double)(nums[0] + nums[nums.size() - 1]) / 2.0;
        for(int i = 1,j = nums.size() - 2;i < j;++i,--j){ 
            if((nums[i] + nums[j]) / 2 < average)
                average = (double)(nums[i] + nums[j]) / 2.0;
        }
        return average;
    }
};