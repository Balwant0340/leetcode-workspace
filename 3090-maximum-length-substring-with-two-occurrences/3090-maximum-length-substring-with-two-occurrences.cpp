class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>count(26,0);
        int maxcount = 0;
        int left = 0;
        for(int i = 0;i <s.size();++i){
            count[s[i]-'a']++;
            while(count[s[i]-'a'] >2){
                count[s[left]-'a']--;
                left++;
            }
            maxcount=max(maxcount,i-left+1);
        }
       return maxcount;
    }
};