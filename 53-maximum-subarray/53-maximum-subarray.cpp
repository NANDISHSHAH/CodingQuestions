class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int rs=0, maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            rs+=nums[i];
            rs=max(rs,nums[i]);
            // co
            maxsum=max(maxsum,rs);
        }
        cout<<maxsum;
        return maxsum;
    }
};