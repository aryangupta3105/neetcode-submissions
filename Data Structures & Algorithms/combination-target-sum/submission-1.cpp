class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>&nums,int target,int i,int sum,vector<int>&temp){
        if(sum>target)return;
        if(i>=nums.size())return;
        if(sum==target){
            result.push_back(temp);
            return;
        }
        sum+=nums[i];
        temp.push_back(nums[i]);
        solve(nums,target,i,sum,temp);
        sum-=nums[i];
        temp.pop_back();
        solve(nums,target,i+1,sum,temp);
       

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>temp;
        solve(nums,target,0,0,temp);
        return result;
    }
};
