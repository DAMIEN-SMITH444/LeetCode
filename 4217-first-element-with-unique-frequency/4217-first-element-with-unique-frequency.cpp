class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp,mp2;
        vector<int>od;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            mp2[x.second]++;
        }
        for(auto x:nums){
            od.push_back(mp2[mp[x]]);
        }
        for(int i = 0;i<n;i++){
            if(od[i] == 1)return nums[i];
        }
        return -1;
    }
};