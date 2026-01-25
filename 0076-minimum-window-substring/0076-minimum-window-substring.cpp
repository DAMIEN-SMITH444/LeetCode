class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        unordered_map<char , int>mp;
        for(char c : t){
            mp[c]++;
        }
        int cnt = mp.size();
        int i = 0, j = 0;
        int sindex = -1;
        int mini = INT_MAX;
        while(j<n){
            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;
                if(mp[s[j]] == 0)cnt--;
            }

            while(cnt == 0){
                if(j-i+1 < mini){
                    mini = j-i+1;
                    sindex = i;
                }

                if(mp.find(s[i]) != mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]] > 0)cnt++;
                }
                i++;
            }
            j++;
        }
        return (sindex == -1) ? "" : s.substr(sindex,mini);
    }
};