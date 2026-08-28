class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int p=1;
        vector<int>prev(n,0);
        vector<int>next(n,0);
        prev[0]=1;
        for(int i=1;i<n;i++){
            int x=prev[i-1]*nums[i-1];
            prev[i]=x;
        }
        next[n-1]=1;
        for(int i=n-2;i>=0;i--){
            next[i]=nums[i+1]*next[i+1];
        }
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=next[i]*prev[i];
        }
        return ans;
    }
};
