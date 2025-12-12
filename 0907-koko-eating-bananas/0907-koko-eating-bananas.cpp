class Solution {
public:

    long long calculateTotalHours(const vector<int>& piles, int hourly){
        long long totalH = 0;
        for(int x : piles){
            totalH += (x + hourly - 1) / hourly;
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());

        while(low <= high){
            int mid = low + (high - low) / 2;
            long long hours = calculateTotalHours(piles, mid);

            if(hours <= h){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
