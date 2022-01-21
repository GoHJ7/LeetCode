class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=1;i<10;i++)
        {
            //row
            int r[10]={0};
            for(int j=1;j<10;j++){
                if(board[i-1][j-1]==46)
                    continue;
                if(r[board[i-1][j-1]-48])
                    return false;
                r[board[i-1][j-1]-48]++;
            }
            //col
            int c[10]={0};
            for(int j=1;j<10;j++)
            {
                if(board[j-1][i-1]==46)
                    continue;
                if(c[board[j-1][i-1]-48])
                    return false;
                c[board[j-1][i-1]-48]++;
            }
        }
        //box
            
            for(int i=0;i<7;i+=3 ){
                for(int j=0;j<7;j+=3){
                    int box[10]={0};
                    for(int x=i;x<i+3;x++){
                        for(int y=j;y<j+3;y++){
                            if(board[x][y]==46)
                                continue;
                            if(box[board[x][y]-48])
                                return false;
                            box[board[x][y]-48]++;
                        }
                    }
                }
            }
        return true;
    }
};
