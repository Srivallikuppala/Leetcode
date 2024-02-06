class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>newa;
        vector<vector<string>>group;
        for(int i = 0 ; i < strs.size() ; i++){
            string word = strs[i];
            sort(word.begin(),word.end());
            newa[word].push_back(strs[i]);
        }
        for(auto it:newa) group.push_back(it.second);
        return group;
    }
};