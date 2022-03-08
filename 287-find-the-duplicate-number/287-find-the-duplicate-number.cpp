class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       long long int t=0;
       unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }
        for(auto x:mp){
            // cout<<x.first;
            if(x.second>=2){
                t=x.first;
                cout<<t;
            }
        }
        return t;
        }
};