class Solution {
public:
    int maxDepth(string s) {
       int n = s.size();
    //    stack<char>st;
       int cnt=0;
       int cnt2=0;
       for(int i=0;i<n;i++){
        if(s[i] == '('){
            // st.push('(');
            cnt ++;
        }
        else if(s[i] == ')'){
            // st.pop();
            cnt2=max(cnt2,cnt);
            cnt--;
        }
       }
       return cnt2; 
    }
};