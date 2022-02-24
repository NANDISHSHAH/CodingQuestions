class Solution {
public:
    bool backspaceCompare(string s, string t) {
         int n1=s.length();
        int n2=t.length();
        string res1,res2;
        stack<char>s1;
         stack<char>s2;
        for( int i=0;i<n1;i++){
            if(s[i]=='#')
            {
                if(!s1.empty())
                    s1.pop();
                }
            else s1.push(s[i]);
        }
        for( int i=0;i<n2;i++){
            
            if(t[i]=='#')
            {
                if(!s2.empty())
                    s2.pop();
                
            }
           else  s2.push(t[i]);
        }
       while(!s1.empty())
       {    
            if(s1.top()!='#')
                res1+=s1.top();
         s1.pop();
        }
         while(!s2.empty())
       {
         if(s2.top()!='#')
                res2+=s2.top();
         s2.pop();
        }
        cout<<res1<<" "<<res2;
        if(res1==res2)return true ;
        
        return false;
    }
};