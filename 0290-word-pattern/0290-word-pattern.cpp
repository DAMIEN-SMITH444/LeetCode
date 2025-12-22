class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            v.push_back(word);
        }
        int n = pattern.size();
        if(n!=v.size())return false;
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        
        for (int i = 0; i < n; i++) {
            char a = pattern[i];
            string b = v[i];

            if (mp1.count(a) && mp1[a] != b)
                return false;
            if (mp2.count(b) && mp2[b] != a)
                return false;

            mp1[a] = b;
            mp2[b]=a;
        }
        return true;
    }
};