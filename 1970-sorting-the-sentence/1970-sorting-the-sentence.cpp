class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int,string>>vp;
        stringstream ss(s);
        string word;
        while(ss >> word){
            int n = word.back() - '0';
            word.pop_back();
            vp.push_back({n,word});
        }
        sort(vp.begin(), vp.end());
        string ans = "";
        for(auto it:vp){
            ans += it.second + " "; 
        }
        ans.pop_back();
        return ans;
    }
};