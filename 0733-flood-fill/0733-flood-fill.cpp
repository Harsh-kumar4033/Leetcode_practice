class Solution {
public:
        void dfs(vector<vector<int>>& image,int oldcolor, int newcolor, int i, int j){

        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j] == newcolor || image[i][j] != oldcolor) return;

        else
        {
            image[i][j]=newcolor;
            dfs(image,oldcolor,newcolor, i+1, j);
            dfs(image,oldcolor,newcolor, i-1, j);
            dfs(image,oldcolor,newcolor, i, j-1);
            dfs(image,oldcolor,newcolor, i, j+1);
        }
        }

 vector<vector<int>>floodFill(vector<vector<int>>& image,int sr,int sc,int color)
    {
        dfs(image,image[sr][sc],color, sr, sc);
        
        return image;
    }
};