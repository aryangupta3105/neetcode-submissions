class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int maxi=1;
        if(nums.empty())return 0;
       
        sort(nums.begin(),nums.end());
        int cnt=1;
        int i=0;
        while(i<n-1){
            while(i<n-1 &&nums[i]==nums[i+1])i++;
            if(i+1<n &&nums[i+1]==nums[i]+1){
                cnt++;
                i++;
            }
            
            else{
                maxi=max(maxi,cnt);
                cnt=1;
                i++;
            }
           
        }
         maxi=max(maxi,cnt);
        return maxi;
    }
};
