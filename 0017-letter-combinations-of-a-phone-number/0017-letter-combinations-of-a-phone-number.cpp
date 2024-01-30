class Solution {
public:
    void comb(int i, vector<string>&ans , string s , vector<string>keys , string digits){
        if(digits[i]=='\0'){
            //cout<<s<<" ";
            ans.push_back(s);
            return;
        }
        int dig = digits[i]-'0';
        if(dig==0 or dig==1)comb(i+1,ans,s,keys,digits);
        for(int k = 0 ; keys[dig][k]!='\0';k++){
            
            comb(i+1,ans,s+keys[dig][k],keys,digits);
        }
    } 
    vector<string> letterCombinations(string dig) {
        
        string digits = dig;
        vector<string>keys={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        if(dig=="")return ans;
        comb(0,ans,"",keys,digits);
        return ans;
    }
};