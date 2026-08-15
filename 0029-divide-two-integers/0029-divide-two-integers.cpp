class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        bool flage = (dividend  < 0) == (divisor < 0);
        long long D = abs((long long) dividend);
        long long d = abs((long long)divisor);
        long long Q = 0;
        while(D >= d){
            long long temp = d;
            long long multiple = 1;
            while(D >= (temp << 1)){
                temp <<= 1;
                multiple <<= 1;
            }
            D -= temp;
            Q += multiple;
        }
        return flage ? Q : -Q;
    }
};