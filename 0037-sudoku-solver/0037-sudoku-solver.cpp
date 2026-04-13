class Solution {
    bool rec(vector<vector<char>>&board,int (&row)[],int (&column)[],int (&box)[],int i, int j)
    {
        if(i>8||j>8)return true;
        if(board[i][j]!='.')
        {
            if(j<8)return rec(board,row,column,box,i,j+1);
            else return rec(board,row,column,box,i+1,0);
        }
        int boxNum=(i/3)+(j/3)*3;
        bool sdsdsd=false;
        int avbl=(~(row[i]|column[j]|box[boxNum]))&0x1FF;
        while(avbl>0)
        {
                int bit=(avbl)&(-avbl);
                int ind=__builtin_ctz(bit);
                row[i]|=bit;
                column[j]|=bit;
                box[boxNum]|=bit;
                board[i][j]='1'+ind;
                bool lyes=(j<8)?rec(board,row,column,box,i,j+1):rec(board,row,column,box,i+1,0);       
                if(lyes)
                {
                    sdsdsd=true;
                    break;
                }
                else
                {
                    bit=~bit;
                    row[i]&=bit;
                    column[j]&=bit;
                    box[boxNum]&=bit;
                    board[i][j]='.';
                    avbl&=(bit);
                }
        }
        return sdsdsd;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        int row[9]={0},column[9]={0},box[9]={0};
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')continue;
                int boxNum=(i/3)+(j/3)*3;
                int num=board[i][j]-'1';
                int bit=(1<<num);
                row[i]|=bit;
                column[j]|=bit;
                box[boxNum]|=bit;
            }
        }
        rec(board,row,column,box,0,0);
    }
};