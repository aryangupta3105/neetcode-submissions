class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int maxi=INT_MIN;
        int i=0,j=n-1;
        while(i<=j){
            int h=min(heights[i],heights[j]);
            int br=(j-i);
            int b=h*br;
            maxi=max(maxi,b);
            if(heights[i]<=heights[j])i++;
            else j--;
        }
        return maxi;
    }
};
