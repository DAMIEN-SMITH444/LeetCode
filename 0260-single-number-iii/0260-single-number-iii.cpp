class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long ans = 0; 
        for(int x : nums) 
            ans ^= x;

        long long mask = ans & (-ans); 

        int x = 0;
        int y = 0;
        for(int num : nums){
            if(num & mask)
                x ^= num;
            else 
                y ^= num;
        }
        return {x, y};
    }
};
