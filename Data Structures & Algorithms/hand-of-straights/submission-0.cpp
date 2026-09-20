class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0)return false;
        sort(hand.begin(),hand.end());
        map<int,int>mpp;
        set<int>s1;
        for(int i:hand)s1.insert(i);
        for(int i:hand)mpp[i]++;
        int cnt=1;
        while(!s1.empty()){
            int first=*s1.begin();
          
            if(mpp.find(first)==mpp.end())return false;
            mpp[first]--;
                if(mpp[first] == 0) {
                mpp.erase(first);
                s1.erase(first);
            }
            int size=1;
            while(size<groupSize){
                
                if(mpp.find(first+size)==mpp.end())return false;
              
                mpp[first+size]--;
             
                if(mpp[first+size]==0){
                        mpp.erase(first+size);
                        s1.erase(first+size);
                }
                
                size++;
            }
        }
        return true;
    }
};