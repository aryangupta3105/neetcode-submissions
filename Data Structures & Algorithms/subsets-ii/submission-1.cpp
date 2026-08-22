class Solution {
public:
    vector<vector<int>> result;
    void solve(vector<int>&nums,int i,set<vector<int>>&s1,vector<int>&temp){
        if(i>=nums.size()){
            if(s1.find(temp)==s1.end()){
                result.push_back(temp);
                s1.insert(temp);
            }
            return;
        }

        temp.push_back(nums[i]);
        solve(nums,i+1,s1,temp);
        temp.pop_back();
        solve(nums,i+1,s1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        vector<int>temp;
        set<vector<int>>s1;
        solve(nums,0,s1,temp);
        return result;
    }
};
