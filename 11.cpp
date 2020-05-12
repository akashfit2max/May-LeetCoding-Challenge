class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor){
            return image;
        }
        fill(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
    //backtracking problem
    void fill(vector<vector<int>>& image, int sr, int sc,int color, int newColor) {
        if(sr<0 || sc<0 || sr>=image.size() ||  sc>=image[0].size() || image[sr][sc]!=color){
            return;
        }
        image[sr][sc]=newColor;
        fill(image,sr-1,sc,color,newColor);
        fill(image,sr+1,sc,color,newColor);
        fill(image,sr,sc-1,color,newColor);
        fill(image,sr,sc+1,color,newColor);
    }
    
};
