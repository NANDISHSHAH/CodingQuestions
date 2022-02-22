class Solution {
public:
    bool isValid(string s) {
        stack<char>t;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i] == '{' || s[i] == '[')
            {
             t.push(s[i]);
            }
            else if(s[i]==')'){
                if(t.empty() or t.top()!='(' )return false;
                t.pop();
            }
            else if(s[i]==']'){
                if(t.empty() or t.top()!='[' )return false;
                t.pop();
            }
            else if(s[i]=='}'){
                if(t.empty() or t.top()!='{' )return false;
                t.pop();
            }
            
        }
        if(t.empty()) return true;
        else return false;
    }
};