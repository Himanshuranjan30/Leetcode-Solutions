class Solution {
public:
    bool issolvable=false;
    void solvesudoku(vector<vector<char>> arr,int i,int j)
    {
        
        if(i==arr.size())
        {
            issolvable=true;
            return;
        }
        int ni=0,nj=0;
        if(j==arr[0].size()-1)
        {
            ni=i+1;
            nj=0;
        }
        else
        {
            ni=i;
            nj=j+1;
        }
        if(arr[i][j]!='.')
        {
            solvesudoku(arr,ni,nj);
        }
        else
        {
            for(int k=1;k<=9;k++)
            {
                if(isvalid(arr,i,j,k))
                {
                    arr[i][j]=k;
                    solvesudoku(arr,ni,nj);
                    arr[i][j]='.';
                }
            }
            
        }
        
    }
    bool isvalid(vector<vector<char>> arr,int i,int j,int k)
    {
        for(int m=0;m<arr[0].size();m++)
        {
            if(arr[i][m]==k)
                return false;
        }
        for(int m=0;m<arr.size();m++)
        {
            if(arr[m][j]==k)
                return false;
        }
        int ni=i/3*3;
        int nj=j/3*3;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
            {
                if(arr[ni+i][nj+j]==k)
                    return false;
            }
        
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        solvesudoku(board,0,0);
        return issolvable;
    }
};
