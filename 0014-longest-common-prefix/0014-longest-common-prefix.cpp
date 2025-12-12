class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size() - 1;
        string ans = "";
        string a = strs[0];
        string b = strs[n];
        int m = strs[0].size();
        int o = strs[n].size();
        int i = 0;
        int j = 0;
        while (i < m && j < o) {
            if (a[i] == b[j]) {
                ans.push_back(a[i]);
                i++;
                j++;
            } else {
                break;
            }
        }
        return ans;
    }
};