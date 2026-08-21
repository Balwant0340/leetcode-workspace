class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        sort(nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        for(int i = 0;i < nums1.size();++i){
            if(i > 0 && nums1[i] == nums1[i-1]) continue;
            int j = 0;
            int k = nums2.size() - 1;
            while(k >= j){
                int mid = j + (k - j)/2;
                if(nums2[mid] == nums1[i]){
                    ans.push_back(nums1[i]);
                    break;
                }
                else if(nums2[mid] > nums1[i]){
                    k = mid - 1;
                }
                else j = mid + 1;
            }
        }
        return ans;
    }
};