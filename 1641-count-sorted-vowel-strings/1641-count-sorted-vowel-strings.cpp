class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>ans(5,1);
        for(int i=2;i<=n;i++){
            for(int i=3;i>=0;i--){
                ans[i]+=ans[i+1];
            }
        }
        int ret=0;
        for(auto x: ans){
            ret+=x;
        }
        return ret ;
    }
};