class Solution {
public:
    int countsetbit(int n){
        int c=0;
        while(n>0){
            n=n&(n-1);
            c++;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int>p;
        if(n==0)p.push_back(0);
        if(n>0){
            for(int i=0;i<=n;i++){
                int ans=countsetbit(i);
                    p.push_back(ans);
            }
        }
        return p;
    }
};