class Solution {
public:
    long long countCommas(long long n) {
        if(n < 999) return 0;
        long long ans = 0;
        if(n >= pow(10,3)) ans += n - pow(10,3) + 1;
        if(n >= pow(10,6)) ans += n - pow(10,6) + 1;
        if(n >= pow(10,9)) ans += n - pow(10,9) + 1;
        if(n >= pow(10,12)) ans += n - pow(10,12) + 1;
        if(n == pow(10,15)) ans += 1;
        return ans;
    }
};