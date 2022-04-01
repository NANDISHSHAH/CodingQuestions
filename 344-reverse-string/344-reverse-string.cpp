class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            swap(s[j],s[i]);
            i++;
            j--;
        }
        // print(s);
        // for(auto x:s){
        //     cout<<x;
        // }
    }
};