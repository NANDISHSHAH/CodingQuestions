class Solution {
public:
    int climbStairs(int n) {
      int a = 2; 
        int b = 1;
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;
        
        for(int i = 3; i <= n; ++i)
        {
            int tmp = a;
            cout<<tmp;
            a += b;
            cout<<a;
            b = tmp;
        }
        
        return a;
    
    }
};