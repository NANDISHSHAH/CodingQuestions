//t dynamic programming with recursion/dp
class Solution {
public:
    
    int findPath(int r, int c, vector<vector<int>>& grid, vector<vector<int>>& dp)
    {
        //boudary and obstacle condition
        if(r>=grid.size() || c>=grid[0].size() || grid[r][c]==1) return 0;
        
        //if we reach right bottom, we get 1 path and return it
        if(r==grid.size()-1 && c==grid[0].size()-1) return 1;
        
        //if path is already store in dp we return it
        if(dp[r][c]!=-1) return dp[r][c];
        
        //calculate the no. of path by moving down and right and return it
        //and store it into the dp
        return dp[r][c]= (findPath(r+1, c, grid, dp) + findPath(r, c+1, grid, dp));
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int m = obstacleGrid.size(), n=obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int> (n, -1)); //create mxn matrix dp and initialize it with -1
        return findPath(0,0, obstacleGrid, dp); 
    }
};