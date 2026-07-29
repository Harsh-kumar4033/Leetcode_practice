class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int st=0;
        int end=n-1;
        
        while(st<m && end>=0){
        
        if(target < matrix[st][end])
        {
            end--;
        }
        else if(target > matrix[st][end])
        {
            st++;
        }
        else{
        return true;
        }
        }
        return false;
    }
};
