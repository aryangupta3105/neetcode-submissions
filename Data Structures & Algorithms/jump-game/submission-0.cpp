class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int>t(n+1);
        if(n==1)return true;
        if(nums[0]==0&&n>1)return false;
        t[0]=0;
        for(int i=1;i<n;i++){
            t[i]=max(t[i-1],nums[i-1]+i-1);
            if(t[i]==i-1)return false;
        }
        return true;
    }
};