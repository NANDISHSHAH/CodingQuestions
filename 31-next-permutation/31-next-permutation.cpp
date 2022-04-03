class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int  n=nums.size();
        for(int j=n-1;j>0;j--){
            if(nums[j]>nums[j-1]){
                index=j;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int prev=index;
            for(int i=index+1;i<nums.size();i++){
                if(nums[i]>nums[index-1] and nums[i]<=nums[prev]){
                    prev = i;
                }
            }
            swap(nums[index-1],nums[prev]);
            reverse(nums.begin()+index,nums.end());
        }
    }
};