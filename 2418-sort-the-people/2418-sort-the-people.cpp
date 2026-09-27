class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i = 0;i < heights.size();++i){
            int idx = i;
            for(int j = i+1;j < heights.size();++j){
                if(heights[idx] < heights[j]){
                    idx = j;
                }
            }
            swap(names[i],names[idx]);
            swap(heights[i],heights[idx]);
        }
        return names;
    }
};