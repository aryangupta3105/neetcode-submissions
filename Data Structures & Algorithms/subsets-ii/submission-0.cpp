class Solution {
public:
    
    void solve(vector<int>&nums,int i,set<vector<int>>&s1,vector<int>&temp,vector<vector<int>>& result){
        if(i>=nums.size()){
            if(s1.find(temp)==s1.end()){
                result.push_back(temp);
                s1.insert(temp);
            }
            return;
        }

        temp.push_back(nums[i]);
        solve(nums,i+1,s1,temp,result);
        temp.pop_back();
        solve(nums,i+1,s1,temp,result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        vector<int>temp;
        set<vector<int>>s1;
        solve(nums,0,s1,temp,result);
        return result;
    }
};
