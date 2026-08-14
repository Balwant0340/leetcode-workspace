class Solution {
public:
    vector<int>DP = vector<int>(46,-1);
    int climbStairs(int n) {
        if(n == 1) return 1;
        else if(n == 2)return 2;
        else if(DP[n] != -1){
            return DP[n];
        }
        int way1 = climbStairs(n-1);
        int way2 = climbStairs(n-2);
        DP[n] = way1 + way2;
        return DP[n];
    }
};