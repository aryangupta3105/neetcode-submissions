class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        int maxi=0,mini=0,cnt=0;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c=='('){
              maxi=maxi+1;
              mini=mini+1;
            }
            else if(c==')'){
               mini=mini-1;
               maxi=maxi-1;
            }
            else{
                mini=mini-1;
                maxi=maxi+1;
            }
            if(mini<0)mini=0;
            if(maxi<0)return false;
        }
        return mini==0;
    }
};
