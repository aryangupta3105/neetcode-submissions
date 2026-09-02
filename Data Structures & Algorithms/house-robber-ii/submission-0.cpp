class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>t(n+1,0);
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        t[0]=0;
        t[1]=nums[0];
        for(int i=1;i<=n-1;i++){
            int steal=nums[i-1]+(i-2>=0?t[i-2]:0);
            int skip=t[i-1];
            
            t[i]=max(steal,skip);
        }
        int result1=t[n-1];
        t.clear();
        //case2
        t[0]=0;
        t[1]=0;
        for(int i=2;i<=n;i++){
            int skip=t[i-1];
            int steal=nums[i-1]+(i-2>=0?t[i-2]:0);
            t[i]=max(steal,skip);
        }
        int result2=t[n];
        return max(result1,result2);
    }
};
