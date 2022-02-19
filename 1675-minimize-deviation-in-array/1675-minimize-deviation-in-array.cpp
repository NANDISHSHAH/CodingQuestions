class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int>pq;
        int n=nums.size();
        int mi=INT_MAX,mx=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                pq.push(nums[i]);
            }
            else{
                nums[i]=nums[i]*2;
                pq.push(nums[i]);
            }
            mi=min(mi,nums[i]);
            mx=max(mx,nums[i]);
        }
        int res=mx-mi;
        while(pq.top()%2==0){
            int curr=pq.top();
            pq.pop();
            res=min(res,curr-mi);
            curr=curr/2;
            pq.push(curr);
            mi=min(mi,curr);
            
        }
        res=min(res,pq.top()-mi);
        return res;
        // return 1;
    }
};