class Solution {
public:
    int binaryGap(int n) {
        string bit = "";
        while(n!=0){
            bit += (n&1) + '0';
            n=n>>1;
        }
        reverse(bit.begin(),bit.end());
        int mx = 0;
        vector<int>store;
        for(int i = 0;i<bit.size();i++){
            if(bit[i] == '1'){
                store.push_back(i);
            }
        }

        for(int i = store.size()-1;i>0;i--){
            mx = max((store[i]-store[i-1]) , mx);
        }
        return mx;
    }
};