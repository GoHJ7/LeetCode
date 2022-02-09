class Solution {
public:
    string convert(string s, int numRows) {
        int weight=1;
        string str[1000];
        int curstr=0;
        string ret;
        if(numRows==1)
            return s;
        for(int i=0;i<s.size();i++){
            if(curstr==0)
                weight=1;
            else if(curstr==numRows-1)
                weight=-1;
            str[curstr].push_back(s[i]);
            curstr+=weight;
        }
        for(int i=0;i<numRows;i++){
            for(int j=0;j<str[i].size();j++){
                ret.push_back(str[i][j]);
            }
        }
        return ret;
    }
};
