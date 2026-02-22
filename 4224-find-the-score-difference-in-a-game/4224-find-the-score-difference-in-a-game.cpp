class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        vector<int> a, b;
        bool state = true;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 1) {
                state = !(state);
            }
            if ((i + 1) % 6 == 0) {
                state = !(state);
            }
            if (state) {
                a.push_back(nums[i]);
            } else {
                b.push_back(nums[i]);
            }
        }

        long long A = accumulate(a.begin(), a.end(), 0LL);
        long long B = accumulate(b.begin(), b.end(), 0LL);
        return (int)A - B;
    }
};