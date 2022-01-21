class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        ret.push_back(vector<int> ());
        ret[0].push_back(1);
        for(int i=1;i<numRows;i++)
        {
            ret.push_back(vector<int> ());
            ret[i].push_back(1);
            for(int j=1;j<i;j++)
            {
                ret[i].push_back(ret[i-1][j-1]+ret[i-1][j]);
            }
            ret[i].push_back(1);
        }
        return ret;
    }
};
