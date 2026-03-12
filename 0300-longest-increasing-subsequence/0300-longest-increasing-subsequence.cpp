class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i = 0;i<n;i++){
            auto it = lower_bound(begin(ans),end(ans) , nums[i]);
            if(it == end(ans))ans.push_back(nums[i]);
            else *it = nums[i];
        }
        return ans.size();
    }
};

/*
-------recursion + memoization -------

class Solution {
public:
    int dp[2501][2501];
    int solve( int i , int p , vector<int>& nums){
        if(i >= nums.size())return 0 ;
        //take
        if(p != -1 && dp[i][p] != -1)return dp[i][p];
        int take = 0;
        if(p == -1 || nums[p] < nums[i]){
            take = 1 + solve(i+1 , i , nums);
        }
        //skip
        int skip = solve(i+1 , p , nums);
        if(p != -1){
            dp[i][p] = max(take , skip);
        }
        return  max(take , skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp , -1 , sizeof(dp));
        return solve(0 , -1 , nums);
    }
};

-----------Bottom Up ------------
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxlis = 1;
        vector<int>t(n,1);
        for(int i = 0;i<n;i++){
            for(int j = 0 ; j<i ;j++){
                if(nums[j] < nums[i]){
                    t[i] = max(t[i] , t[j]+1);
                    maxlis = max(maxlis , t[i]);
                }
            }
        }
        return maxlis;
    }
};
*/