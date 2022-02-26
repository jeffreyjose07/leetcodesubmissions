class Solution {
public:
    int island(int i, int j,vector<vector<char>>& grid){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0'){
            return 0;
        }
        grid[i][j]='0';
        island(i+1,j,grid);
        island(i-1,j,grid);
        island(i,j+1,grid);
        island(i,j-1,grid);
        return (1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int numOfIslands = 0;
        for(int i= 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                numOfIslands+=island(i,j,grid); 
            }
        }
        return numOfIslands;
    }
};