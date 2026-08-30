class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minidx = 0;
        int maxidx = 0;
        for(int i = 0;i < nums.size();++i){
            if(nums[minidx] > nums[i]){
                minidx = i;
            }
            if(nums[maxidx] < nums[i]){
                maxidx = i;
            }
        }
        int a = max(minidx,maxidx);
        int b = min(minidx,maxidx);
        int n = nums.size();
        return min({a+1 , n-b, b+1 + n-a});
    }
};