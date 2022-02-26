class Solution {
public:
    string removeDuplicates(string s) {
       string res;
        int i = 0;
        while (s[i]) {
            if (s[i] == res.back()) {
                res.pop_back();
            }
            else {
                res.push_back(s[i]);
            }
            i++;
        }
        return res;
    }
};