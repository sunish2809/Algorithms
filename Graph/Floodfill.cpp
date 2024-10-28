class Solution {
  public:
  void dfs(int n , int m, int i , int j, vector<vector<int>>& image,int newColor,int srcColor)
  {
      if(i<0||i>=n||j<0||j>=m||image[i][j]!=srcColor) return;
      
      if(image[i][j] = srcColor)
      {
          image[i][j] = newColor;
          dfs(n,m,i+1,j,image,newColor,srcColor);
          dfs(n,m,i,j+1,image,newColor,srcColor);
          dfs(n,m,i-1,j,image,newColor,srcColor);
          dfs(n,m,i,j-1,image,newColor,srcColor);
      }
  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,int newColor) {
        // Code here
        int n = image.size();
        int m = image[0].size();
        int srcColor = image[sr][sc];
        if(srcColor == newColor) return image;
        
        dfs(n,m,sr,sc,image,newColor,srcColor);
        
        return image;
    }
};