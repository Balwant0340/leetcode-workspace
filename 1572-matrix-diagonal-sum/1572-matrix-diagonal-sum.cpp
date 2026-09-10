class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0;i < mat.size();i++){
            sum1 += mat[i][i];
            sum2 += mat[mat.size()-1-i][i];
        }
        if(mat.size() % 2 != 0){
            sum1 -= mat[mat.size()/2][mat.size()/2];
        }
        return sum1+sum2;
    }
};