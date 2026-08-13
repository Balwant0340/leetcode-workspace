class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int idx = -1;
        bool isNegative = false;
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != ' ') {
                idx = i;
                break;
            }
        }
        if (idx == -1) return 0;
        if (s[idx] == '-' || s[idx] == '+') {
            if (s[idx] == '-') {
                isNegative = true;
            }
            idx++;
        }
        for (int i = idx; i < s.size(); ++i) {
            if (s[i] < '0' || s[i] > '9') {
                break;
            }
            int digit = s[i] - '0';
            ans = ans * 10 + digit;
            if (!isNegative && ans > INT_MAX) {
                return INT_MAX;
            }
            if (isNegative && -ans < INT_MIN) {
                return INT_MIN;
            }
        }
        
        if (isNegative) {
            ans *= -1;
        }
        
        return (int)ans;
    }
};