class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int>pq;
        for(int i:stones)pq.push(i);
        while(pq.size()!=1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x==y&& pq.size()==0)return 0;
            if(x==y)continue;
            int diff=x-y;
            
            pq.push(diff);
        }
        return pq.top();
        }
};
