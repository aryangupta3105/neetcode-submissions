class Solution {
public:

    int solve(int n,vector<int>&t){
        
        if(n<0)return 0;
        if(t[n]!=-1)return t[n];
        if(n==0)return 1;
        int o=solve(n-1,t);
        int tt=solve(n-2,t);
        return t[n]=o+tt;
    }
    int climbStairs(int n) {
         vector<int>t(46,-1);
        return solve(n,t);
    }
};