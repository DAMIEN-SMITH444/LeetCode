class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string>ans(n);
        priority_queue<pair<int,int>>pq;
        for(int i = 0 ;i<n;i++){
            pq.push({score[i],i});
        }
        for(int i = 0;i<n;i++){
            if(i==0){
                ans[pq.top().second] = "Gold Medal";
            }else if(i==1){
                ans[pq.top().second] = "Silver Medal";
            }else if(i==2){
                ans[pq.top().second] = "Bronze Medal";
            }else {
                ans[pq.top().second] = to_string(i + 1);
            }
            pq.pop();
        }
        return ans;
    }
};