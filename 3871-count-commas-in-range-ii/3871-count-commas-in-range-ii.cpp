class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long i = 1000;
        while(n >= i){
            ans += (n - i + 1);
            i *= 1000;
        }
        return ans;
    }
};