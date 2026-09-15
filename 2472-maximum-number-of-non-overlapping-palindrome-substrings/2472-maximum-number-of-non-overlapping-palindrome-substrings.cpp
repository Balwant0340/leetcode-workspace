class Solution {
public:
    bool palindromes(string &s,int left ,int right){
        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    int maxPalindromes(string s, int k) {
        int ans = 0;
        for(int i = 0;i <= s.size() - k;++i){
            if(palindromes(s,i,i + k - 1)){
                ans++;
                i += k - 1;
            }
            else if(i +  k < s.size() && palindromes(s,i,i + k )){
                ans++;
                i += k;
            }
        }
        return ans;
    }
};