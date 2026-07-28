class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int srow=0, scol=0, erow=m-1, ecol=n-1; 
        
        vector<int>ans;
        while(srow<=erow && scol<=ecol)
        {
            //top
            for(int j=scol; j<=ecol; j++)
            {
                ans.push_back(matrix[srow][j]);
            }
            for(int i=srow+1; i<=erow; i++)
            {
                //right
                
                ans.push_back(matrix[i][ecol]);
            }

            for(int k=ecol-1; k>=scol; k--)
            {
                //bottom
                if(srow==erow)
                {
                    break;
                }
                ans.push_back(matrix[erow][k]);
            }
            for(int p=erow-1; p>srow; p--)
            {
                //left
                if(scol==ecol)
                {
                    break; 
                }
                ans.push_back(matrix[p][scol]);
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return ans;
    }
};