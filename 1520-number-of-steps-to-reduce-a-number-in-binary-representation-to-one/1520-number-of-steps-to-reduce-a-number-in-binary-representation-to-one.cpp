class Solution {
private:
    void addOne(std::string &s) {
        int n = s.length();
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                s[i] = '1';
                return;
            }
            s[i] = '0';
        }
        s = "1" + s; 
    }
public:
    int numSteps(string s) {
        int n = s.size();
        int cnt = 0;
        while(s.size() != 1){
            if(s[s.size()-1] == '1'){
                addOne(s);
            }else{
                s.pop_back();
            }
            cnt++;
        }
        return cnt;
    }
};