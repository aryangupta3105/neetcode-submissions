class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i:nums){
            mpp[i]++;
        }
        vector<pair<int,int>>arr;

        for(auto& itr:mpp){
            arr.push_back({itr.second,itr.first});
        }
        sort(arr.rbegin(),arr.rend());
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
