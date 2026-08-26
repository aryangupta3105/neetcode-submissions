class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char>st;
        int i=0;
        while(i<n){
            char c=s[i];
            if(c=='('||c=='['||c=='{')st.push(c);
            else{
                if(st.empty())return false;
                if((c==')'&& st.top()!='(' ||c=='}'&& st.top()!='{'||c==']'&& st.top()!='[') )return false;
                else st.pop();
            }
            i++;
        }
        if(!st.empty())return false;
        return true;
    }
};
