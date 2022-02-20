// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int res=0;
    while(n>0){
        int digit = n % 10;
    if(digit==0){
            digit=5;
            res=res*10+digit;
            n=n/10;
        }
        else{
            res=res*10+digit;
            n=n/10;
        }
    }
   string strin = to_string(res);
 
    // reversing the string
    reverse(strin.begin(), strin.end());
 
    // converting string to integer
     res = stoi(strin);
 
    // cout<<n;
    return res;
}