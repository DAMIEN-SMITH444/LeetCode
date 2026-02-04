class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        int i = 0,j = n,idx1 = 0,idx2=1;
        while(i<n){
            ans[idx1] = nums[i];
            ans[idx2] = nums[j];
            idx1+=2;
            idx2+=2;
            i++;
            j++;
        }
        return ans;
    }
};