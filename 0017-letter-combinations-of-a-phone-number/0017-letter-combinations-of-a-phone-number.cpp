class Solution {
public:
    void Fun(int i,int j,string &digits,char *ans,vector<string> &res,char keypad[][10]){
        if(digits[i] == '\0'){
            if(ans[0] != '\0')
            res.push_back(ans);
            return ;
            }
        int digit = digits[i]-'0';
        for(int k = 0; k < keypad[digit][k] != '\0';k++){
            ans[j] = keypad[digit][k];
            Fun(i+1,j+1,digits,ans,res,keypad);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        char keypad[][10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        char ans[100];
        Fun(0,0,digits,ans,res,keypad);
        if(digits.size() == 0) return {};
        return res;
    }
};