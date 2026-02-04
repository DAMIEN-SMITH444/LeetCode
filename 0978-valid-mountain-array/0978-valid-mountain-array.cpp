class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<=2)return false;
        int i = 0;int j = n-1;
        while(i+1<n-1 && arr[i]<arr[i+1])i++;
        while(j-1&&arr[j]<arr[j-1])j--;
        return i==j;
    }
};