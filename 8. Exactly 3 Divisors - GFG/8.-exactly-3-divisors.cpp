// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int n)
    {
        //Your code here
        int m=floor(sqrt(n));
        int c=0;
        vector<bool>v(m+1,true);
        for(int i=2;i*i<=m;i++){
            if(v[i]){
            for( int j=i*i;j<=m;j+=i){
                    v[j]=false;
                }
            }
        }
        for(int i=2;i<=m;i++){
            if(v[i])
            c++;
        }
        return c;
    }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends