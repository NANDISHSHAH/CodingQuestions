class Solution {
public:
    bool ispalindrome(string s,int i,int j){
        
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
           else return false ;
            
        }
        return true;
    }
    bool validPalindrome(string s) {
        int low=0,high=s.size()-1;
        while(low<=high){
            if(s[low]==s[high]){
                low++;
                high--;
            }
            else return ispalindrome(s,low+1,high)||ispalindrome(s,low,high-1);
        }
        return true;
    }
};