class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        vector<int>arr(26);
        for(int i=0;i<s.length();i++){
        
               arr[s[i]-'a']++;
               arr[t[i]-'a']--;
            
        }
        for(auto x:arr){
            if(x!=0)return false;
        }
        return true ;
    }
};