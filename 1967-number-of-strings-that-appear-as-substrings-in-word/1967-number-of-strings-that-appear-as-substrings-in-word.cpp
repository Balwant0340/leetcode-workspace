class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for(int i = 0;i < patterns.size();++i){
            size_t idx = word.find(patterns[i]);
            if(idx != string::npos){
                count++;
            }
        }
        return count;
    }
};