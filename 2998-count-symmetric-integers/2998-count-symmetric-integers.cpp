bool isSymmetric(int n){
    string s = to_string(n);
    int l = s.length();
    if(l%2==1)return false;
    int sum1 = 0 ; int sum2 = 0;
    for(int i = 0;i<l;i++){
        for(int j=0;j<l/2;j++){
            sum1 += s[j] - '0';
        }
        for(int j=l/2;j<l;j++){
            sum2 += s[j] - '0';
        }
    }
    if(sum1 == sum2)return true;
    else return false;
}
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for(int i = low;i<=high;i++){
            if(isSymmetric(i))cnt++;
        }
        return cnt;
    }
};