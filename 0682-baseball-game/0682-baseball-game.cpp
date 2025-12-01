class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+" ){
                int num = stoi(operations[i]);
                ans.push_back(num); 
            }
            else if(operations[i] == "C"){
                ans.pop_back();
            }
            else if(operations[i] == "D"){
                ans.push_back(ans.back() * 2);
            }
            else if(operations[i] == "+"){
                int first = ans.size() - 2;
                int second = ans.size() - 1;
                ans.push_back( ans[first]  + ans[second] );
            }
        }
        int sum = 0 ;
        for(auto it : ans){
            sum+=it;
        }
        return sum ;
    }
};