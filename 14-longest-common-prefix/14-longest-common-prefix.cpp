class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";// if no value return null 
        //intialise min
        int mi=INT_MAX;
        // getting first value of array for comparing and storing it
        string c=strs[0];
        // cout<<c;
        // now looping from 1 as we have taken first value in the array
       for(int i=1;i<strs.size();i++){
           //intialize zero value  
           int j=0,k=0,a=0;
        while(j<c.size() && k<strs[i].size()){
           //comparing the values if equal getting the min length
            if(c[j]==strs[i][k])a++;
            else break;
            j++;
            k++;
            // cout<<a;
        }
             mi=min(mi,a);
       }
        return c.substr(0,mi);//returning a longest common prefix means the minimum common value 
    }
};