class Solution {
public:
    vector<vector<int>>result;
    set<int>s1;
    void solve(vector<int>& temp,vector<int>& nums){
        if(temp.size()==nums.size()){
            result.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(s1.find(nums[i])==s1.end()){
                temp.push_back(nums[i]);
                s1.insert(nums[i]);
                solve(temp,nums);
                temp.pop_back();
                s1.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        //result.clear();
        vector<int>temp;
        solve(temp,nums);
        return result;
    }
};