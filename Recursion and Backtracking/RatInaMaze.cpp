#include <iostream>
using namespace std;

bool mazeRunner(char inp[10][10], int out[][10], int i, int j, int m, int n)
{
    // cout<<"i:"<<i<<" j:"<<j<<" inp: "<< inp[i][j]<<endl;
    // cout<<"m: "<<m << " n: "<<n<<endl;

    if(i==m && j==n)
    {
        out[m][n] = 1;
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                cout<<out[i][j]<<" ";
            }
            cout<<endl;;          
        }
        cout<<endl;
        return true;
    }

    if(i>m || j>n)
    {
        return false;
    }

    if(inp[i][j]=='X') return false;

    out[i][j] = 1;

    bool rightPath = mazeRunner(inp,out,i,j+1,m,n);
    bool downPath = mazeRunner(inp,out,i+1,j,m,n);

    // cout<<"right path:"<<rightPath<<" down path:"<<downPath<<endl;

    out[i][j] = 0;
    if(rightPath || downPath)
    {
        return true;
    }

    return false;
}


int main()
{
    char maze[10][10] = {"0000",
                      "00X0",
                      "000X",
                      "0X00"};


    int soln[10][10] = {0};
    int m = 4;
    int n = 4;

    bool exist = mazeRunner(maze,soln,0,0,m-1,n-1);
    if(exist==false) {
        cout<<"Path does not exist"<<endl;
    }

    return 0;
}