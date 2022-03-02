class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.length(); // extracting length of string s
        int n2 = t.length(); // extracting length of string t
        
        // if length of string s is greater than string t, then it is impossible to find out s in t
        // say s = "abcdef" and t = "ab"
        if(n1 > n2)
        {
            return false;
        }
        
        // if both strings are empty, then definately return true
        if(n1 == 0 && n2 == 0)
        {
            return true;
        }
        
        int j = 0; // declaring j pointer which moves in string s
        
        // find variable which tells us whether we ae able to find string s in string t
        bool find = false; 
        
        // traverse from string t
        for(int i = 0; i < n2; i++)
        {
            // if character matches
            if(t[i] == s[j])
            {
                j++; // increase j pointer
            }
            
            // if at any point j pointer becomes equal the length of string s,
			//then we will say yes!! we find a string therefore,
			//put find as true and from now we don't need to travel, so break
            if(j == n1)
            {
                find = true;
                break;
            }
        }
        
        // and lastly if we are not able to find string s in string t,
        // then my find variable remains false, so 
        
        return find;  // so simply return find
    }
        
    
};