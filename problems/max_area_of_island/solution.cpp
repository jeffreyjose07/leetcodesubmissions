class Solution {
public:
    
    int area(int i,int j,vector<vector<int>>& grid,vector<vector<bool>>& seen){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || seen[i][j] || !grid[i][j]){
            return 0;
        }
        seen[i][j]=true;
        return (1+area(i+1,j,grid,seen)+area(i,j+1,grid,seen)+area(i-1,j,grid,seen)+area(i,j-1,grid,seen)); 
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        
        vector<vector<bool>>seen(grid.size(),vector<bool>(grid[0].size(),false));
        
        for(int i=0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                maxArea = max(maxArea,area(i,j,grid,seen));
            }
        }
        return maxArea;
    }
};