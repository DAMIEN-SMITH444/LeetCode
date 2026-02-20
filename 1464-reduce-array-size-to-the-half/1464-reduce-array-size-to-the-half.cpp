class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        priority_queue<pair<int,int>>pq;

        for(auto pair:mp){
            pq.push({pair.second, pair.first});
        }

        int cnt = 1;
        int sum = 0;
        
        if( pq.top().first >= arr.size()/2){
            pq.pop();
            return cnt;
        }
        while(!pq.empty() && sum+pq.top().first < arr.size()/2){
            sum+=pq.top().first;
            pq.pop();
            cnt++;
        }
        return cnt;
    }
};