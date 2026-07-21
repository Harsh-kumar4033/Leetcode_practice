class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col0=1;

       for(int p=0; p<m; p++)
       {
            for(int q=0; q<n; q++)
            {
                if(matrix[p][q]==0){
                    if(q==0)
                    {
                        col0 =0;
                    }
                    else
                    {
                        matrix[0][q]=0;
                    }
                    matrix[p][0]=0;
                   
                }
            }
        }
        for(int i=1; i<m; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(matrix[i][j] != 0){
                    if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        if(matrix[0][0]==0)
        {
             for(int l=0; l<n; l++)
            {
                matrix[0][l]=0;
            }
        }
        if(col0 == 0){
            for(int k=0; k<m; k++)
            { 
                matrix[k][0]=0;
            }
        }

        


        


        
        // int m = matrix.size();
        // int n = matrix[0].size();

        // vector<int>row(m,0);
        // vector<int>col(n,0);
        // for(int i=0; i<m; i++)
        // {
        //     for(int j=0; j<n; j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //         row[i]=-1;
        //         col[j]=-1;
        //         }
        //     }
        // }

        // for(int p=0; p<m; p++)
        // {
        //     for(int q=0; q<n; q++)
        //     {
        //         if(row[p] || col[q])
        //         {
        //         matrix[p][q]=0;
        //         }
        //     }
        // }

    }
};