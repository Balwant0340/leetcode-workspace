class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<bool>count(100,false);
        for(int i = 0;i < nums.size();++i){
            if(nums[i] % k == 0){
                count[nums[i]/k] = true;
            }
        }
        for(int i = 1;i < 100;++i){
            if(count[i] == false){
                return k*i;
            }
        }
        return k*101;
    }
};