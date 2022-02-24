class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i = n - 1 ; i >= 0 ; i--)
	  {
		if (!st.empty()) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
        }
        ans[i]=st.empty()?-1:st.top();
        st.push(nums2[i]);
	 }
        // for(auto a: ans)cout<<a;
	int n1=nums1.size();
	vector<int>res;
	for(auto i=0;i<nums1.size();i++){
       int idx = find(nums2.begin(), nums2.end(), nums1[i])-nums2.begin(); 
        cout<<idx;
        res.push_back(ans[idx]);
	}
	return res;
  }
};