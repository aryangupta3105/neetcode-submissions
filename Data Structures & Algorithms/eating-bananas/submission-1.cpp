class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int e = *max_element(piles.begin(), piles.end());
        int s=1;
        int mini = e;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long hours=0;
            for(int i:piles){
                hours+=i/mid;
                if(i%mid!=0)hours+=1;
            }
            if(hours<=h){
                
                mini=mid;
                e=mid-1;
                
            }
            else{
                s=mid+1;
            }
        }
        return mini;
    }
};
