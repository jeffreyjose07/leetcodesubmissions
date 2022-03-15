class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor){
            return image;
        }
        floodFillWithColor(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
    void floodFillWithColor(vector<vector<int>>& image, int sr, int sc, int newColor, int initialColor){
        if(sr<0 || sr==image.size() || sc<0 || sc==image[0].size() || image[sr][sc]!=initialColor){
            return;
        }
        image[sr][sc]=newColor;
        floodFillWithColor( image, sr-1,  sc,  newColor, initialColor);
        floodFillWithColor( image, sr+1,  sc,  newColor, initialColor);
        floodFillWithColor( image, sr,  sc-1,  newColor, initialColor);
        floodFillWithColor( image, sr,  sc+1,  newColor, initialColor);
    }
};