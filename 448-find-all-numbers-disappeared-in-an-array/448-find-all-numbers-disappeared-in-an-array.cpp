class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         int n = nums.size();
       vector<int> a(n+1, 0);
       for(int i = 0; i < n; i++) {
           a[nums[i]]++;
       }
       int count = 0;
       vector<int>v;
       for(int i = 1; i < n + 1; i++) {
           if(a[i] == 0) { v.push_back(i); }
       }
       return v;
    
        
    }
};