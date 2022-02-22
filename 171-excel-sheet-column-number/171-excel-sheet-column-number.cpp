class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res=0;
        for(char c:columnTitle){
            int d=c-'A'+1;
              res=res*26+d;
            // cout<<res;
            // cout<<d;
        }
        return res;
    }
};