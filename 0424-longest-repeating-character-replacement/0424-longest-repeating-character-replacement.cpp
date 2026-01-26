class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int>freq(26,0);
        int mx = 0, ans = 0;
        int i = 0, j = 0;
        while(j<n){
            freq[s[j] - 'A']++;
            mx = max(mx,freq[s[j] - 'A']);

            while((j-i+1) - mx > k){
                freq[s[i] - 'A']--;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};