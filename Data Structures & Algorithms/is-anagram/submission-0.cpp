class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v1(26,0),v2(26,0);
        for(char c:s){
            int x=c-'a';
            v1[x]++;
        }
        for(char c:t){
            int x=c-'a';
            v2[x]++;
        }
        for(int i=0;i<26;i++){
            if(v1[i]!=v2[i])return false;
        }
        return true;
    }
};
