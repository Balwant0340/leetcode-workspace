class Solution {
public:
    int reverse(int x) {
        bool flage = false;
        long long temp = x;
        if(x < 0){
            flage = true;
            temp *= -1;
        }
        string s = to_string(temp);
        std::reverse(s.begin(),s.end());
        long long n = stoll(s);
        if (n > INT_MAX || n < INT_MIN) return 0;
        return flage ? -n : n;
    }
};