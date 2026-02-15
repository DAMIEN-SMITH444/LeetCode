class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto it:bulbs){
            mp[it]++;
        }
        for(auto x:mp){
            if(x.second&1)ans.push_back(x.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};