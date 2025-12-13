class Solution {
public:
    bool canMake(vector<int>& nums, int mid, int& threshold) {
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            total += ceil((double)nums[i] / (double)mid);
        }
        return total <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canMake(nums, mid, threshold)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};