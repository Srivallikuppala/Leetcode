class Solution {
public:
    void pasc(int n , vector<vector<int>>&main){
        if(n==1){
            vector<int>r;
            r.push_back(1);
            main.push_back(r);
            return;
        }
        pasc(n-1,main);
        vector<int>x;
        x.push_back(1);
        int i  =0;
        while(i!=n-2){
            x.push_back(main[n-2][i]+main[n-2][i+1]);
            i+=1;
        }
        x.push_back(1);
        main.push_back(x);
    };
    vector<vector<int>> generate(int n) {
        vector<vector<int>>vect;
        pasc(n,vect);
        return vect;
    }
};