class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row=mat.size();
        int col=mat[0].size();
        vector<vector<int>> ret;
        if(r*c!=row*col)
            return mat;
        else
        {
            for(int i=0;i<r;i++)
                ret.push_back(vector<int>());
            int a=0,b=0;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    if(b==c)
                    {
                        b=0;
                        a++;
                    }
                    //cout<<ret.size()<<'\n';
                    ret[a].push_back(mat[i][j]);
                    b++;
                }
            }
        }
        return ret;
    }
};
