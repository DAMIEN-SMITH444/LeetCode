class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_set<string>st,st2;
        int n = words.size();
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(words[i].size() < k)continue;
            string temp = words[i].substr(0,k);

            if(st.find(temp) != st.end() && st2.find(temp) == st2.end()){
                cnt++;
                st2.insert(temp);
            }
            st.insert(temp);
        }
        return cnt;
    }
};