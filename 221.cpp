class Solution {
public:
    int dp(vector<vector<int>>& matrix){
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]){
                    int a=min(matrix[i-1][j-1],matrix[i-1][j]);
                    matrix[i][j]=min(a,matrix[i][j-1])+1;
                }
            }
        }
        int max_=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]&&matrix[i][j]>max_){
                    max_=matrix[i][j];
                }
            }
        }
        return max_*max_;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>> m;
        for(int i=0;i<matrix.size();i++){
            m.push_back(vector<int>());
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]=='1')
                    m[i].push_back(1);
                else
                    m[i].push_back(0);
            }
        }
        return dp(m);
    }
};
