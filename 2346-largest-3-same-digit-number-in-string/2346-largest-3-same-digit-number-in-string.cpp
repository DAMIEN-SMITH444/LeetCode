class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();
        char mx = ' ';
        string ans  = "";
        for(int i = 2;i<n;i++){
            if(num[i] == num[i-1] && num[i]==num[i-2]){
                mx = max(num[i] , mx);
            }
        }
        if (mx == ' ') {
            return "";
        }else {   
            return string(3, mx);
        }
    }
};