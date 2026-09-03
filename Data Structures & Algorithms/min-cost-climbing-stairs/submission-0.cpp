class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>t(n+1);
        t[0]=0;
        t[1]=cost[0];
        t[2]=cost[1];
        if(n==2)return min(cost[0],cost[1]);
        for(int i=3;i<=n;i++){
            
            t[i]=cost[i-1]+min(t[i-1],t[i-2]);
        }
        return min(t[n-1],t[n]);
    }
};