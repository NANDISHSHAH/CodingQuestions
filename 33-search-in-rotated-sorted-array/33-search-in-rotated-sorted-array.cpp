class Solution {
public:
    int  binarysearch(vector<int>& nums,int start,int end ,int target){
        // sort(nums.begin(),nums.end());
       
        int n=nums.size();
        // cout<<n;
        // for(auto x:nums){
        //     cout<<x<<endl;
        // }
        while(start<=end){
             int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;        
            }
            //left side is sorted 
           if(nums[start]<=nums[mid]){
               //check your element lies in left half 
               if(target >=nums[start] && target<=nums[mid]){
                   end=mid-1;
               }
               else{
                   start=mid+1;
               }
           }
            //right side is sorted
            else {
                //check your element is on right side 
                if(target>=nums[mid] && target<=nums[end])
                    {
                            start=mid+1;
                    }
                else{
                            end=mid-1;
                    }
                }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
       return  binarysearch(nums,0,nums.size()-1,target);
    }
};