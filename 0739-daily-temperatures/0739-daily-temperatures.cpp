class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>>st;
        vector<int> vct(t.size(),0);
        int j = t.size()-1;
        st.push({t[j],j});
        for(int i = t.size()-2 ; i > -1 ; i--){
            while(!st.empty() and t[i]>=st.top().first){
                st.pop();
            }
            if(st.empty()) st.push({t[i],i});
            if(!st.empty() and t[i]<st.top().first){
                vct[i] = st.top().second-i;
                st.push({t[i],i});
            }
        }
        return vct;
    }
};
// [73,74,75,71,69,72,76,73]
// [89,62,70,58,47,47,46,76,100,70]
// [80,34,80,80,80,34,34,34,34,34]