class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            
        }
        int max=0,res=0;
        for(auto x:mp){
            if(x.second>max){
                max=x.second;
                res=x.first;
            }
        }
        return res;
    }
};