class Solution {
    
public:
    bool isDigitorialPermutation(int n) {
        string s = to_string(n);
        long long sum = 0;
        unordered_map<int, int> f;
        int fact = 1;
    
        for (int i = 0; i <= 9; ++i) {
            if (i > 0) fact *= i;
            f[i] = fact;
        }
        
        for(char x:s){
            sum+=f[x-'0'];
        }
        string temp = to_string(sum);
        sort(temp.begin(),temp.end());
        sort(s.begin(),s.end());
        if(temp==s)return true;
        else return false;
    }
};