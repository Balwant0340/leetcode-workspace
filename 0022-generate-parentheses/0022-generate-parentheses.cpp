class Solution {
public:
void parenthesis(vector<string>&s,int ob,int cb,int n,string ans){
    if(cb == n){
        s.push_back(ans);
        return;
    }
    if(ob < n){
        parenthesis(s,ob+1,cb,n,ans+'(');
    }
    if(cb < ob){
        parenthesis(s,ob,cb+1,n,ans+')');
    }
}
vector<string> generateParenthesis(int n) {
    vector<string>s;
    parenthesis(s,0,0,n,"");
    return s;
}
};