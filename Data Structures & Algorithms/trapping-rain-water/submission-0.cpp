class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int n=height.size();
        int l=0,r=n-1,rm=0,lm=0;
        while(l<r){
            lm=max(lm,height[l]);
            rm=max(rm,height[r]);
            if(lm<rm){
                ans+=lm-height[l];
                l++;
            }
            else{
                ans+=rm-height[r];
                r--;
            }
        }
        return ans;
    }
};
