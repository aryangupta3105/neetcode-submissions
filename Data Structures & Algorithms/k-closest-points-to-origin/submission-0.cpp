class Solution {
public:
    int distance(int x,int y){
     
        
        
        return x * x + y * y;

    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<k;i++){
            int x=points[i][0];
            int y=points[i][1];
            int dis=distance(x,y);
            pq.push({dis,{x,y}});
            
        }
        for(int i=k;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            int dis=distance(x,y);
            if(dis<pq.top().first){
                pq.pop();
                pq.push({dis,{x,y}});
            }
        }
        vector<vector<int>>ans;
        while(pq.size()!=0){
         auto p = pq.top();

        int x = p.second.first;
        int y = p.second.second;

        pq.pop();
            ans.push_back({x,y});
        }
        return ans;
    }
};
