class Solution {
private:
    void solve (string digits , string output,int index,vector<string>&ans,vector<string>mp){
        //base case 
        if(index >= digits.size()){
            ans.push_back(output);
            return;
        }

        int digit = digits[index] - '0';
        string value = mp[digit];
        for(int i = 0;i<value.size();i++){
            output.push_back(value[i]);
            solve(digits,output,index+1,ans,mp);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output = "";
        if(digits.size() == 0)return ans;
        int index = 0;
        vector<string>mp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,mp);
        return ans;
    }
};