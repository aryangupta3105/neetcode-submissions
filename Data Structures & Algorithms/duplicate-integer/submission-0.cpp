class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>s1;
        for(int i:nums){
            if(s1.find(i)!=s1.end())return true;
            s1.insert(i);
        }
        return false;
    }
};