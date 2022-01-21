class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        //find row
        int r=-1;
        for(int i=0;i<m;i++){
            if(target<=matrix[i][n-1]){
                r=i;
                break;
            }
        }
        if(r==-1)
            return false;
        for(int i=0;i<n;i++){   
            if(matrix[r][i]==target)
                return true;
        }
        return false;
    }
};
