class Solution {
public:

void sol(int n,int open,int close,string current, vector<string>& ans){
    if((int)current.size()==n*2){
        ans.push_back(current);
        return;
    }

    if(open < n){
        sol(n,open+1,close,current+'(',ans);
    }

    if(close < open){
        sol(n,open,close+1,current+')',ans);
    }
}

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        sol(n,0,0,"",ans);
        return ans;

        
    }
};