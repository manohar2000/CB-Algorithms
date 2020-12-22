#include <iostream>
#include <bitset>
using namespace std;

bitset<30> col,d1,d2;

void solve(int r, int n, int &ans)
{
    if(r==n) 
    {
        ans++;
        return;
    }

    for(int c=0;c<n;c++)
    {
        // r is the row index and c is the column index
        // constructing 3 array to store the places which are under attack with the pre-existing queens.
        // for storing diag under attack we observe the queen will always occupy all the (i,j) whose difference is equal to current i-j
        // to avoid storing neg diag values e.g (1,2 = -1) we shift the arrays from (-n->n) to (0,2n) 
        if( !col[c] && !d1[r-c+n-1] && !d2[r+c])
        {
            col[c] = d1[r-c+n-1] = d2[r+c] = 1;
            solve(r+1,n,ans);
            col[c] = d1[r-c+n-1] = d2[r+c] = 0;
 
        }
    }

}


int main()
{   
    int n;
    cin>>n;
    int ans = 0;
    solve(0,n,ans);
    cout<<ans<<endl;


    return 0;
}