class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        sort(nums3.begin(),nums3.end());
        int m = nums1.size();
        int n = nums2.size();
        int p = nums3.size(); 
        int low=0 , mid=0,high=0;
        set<int>st;
        while(low < m && mid < n ){
            if(nums1[low] > nums2[mid]){
                mid++;
            }
            else if(nums1[low] < nums2[mid]){
                low++;
            }
            else {
                st.insert(nums1[low]);
                low++;mid++;
            }
        }

        low=0 , mid=0,high=0;

        while(mid < n && high < p ){
            if(nums2[mid] > nums3[high]){
                high++;
            }
            else if(nums2[mid] < nums3[high]){
                mid++;
            }
            else {
                st.insert(nums2[mid]);
                high++;mid++;
            }
        }
        low=0 , mid=0,high=0;

        while(low < m && high < p ){
            if(nums1[low] > nums3[high]){
                high++;
            }
            else if(nums1[low] < nums3[high]){
                low++;
            }
            else {
                st.insert(nums3[high]);
                low++;high++;
            }
        }
        vector<int>ans(st.begin(), st.end());
        return ans;
    }
};