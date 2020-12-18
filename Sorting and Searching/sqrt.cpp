#include <iostream>
using namespace std;

float square_root(int n, int precision)
{
    int ans;   

    int s = 0;
    int e = n;
    int mid;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(mid*mid< n)
        {            
            s = mid+1;
            ans = mid; 
                       
        }
        if(mid*mid>n)
        {
            e = mid-1;
        }
        else
        {
            ans = mid;
            break;
        }              
    }

    float increment = 0.1;
    for(int i=0;i<precision;i++)
    {
        while(ans*ans<=n)
        {
            ans+=increment;
        }
        ans-=increment;
        increment/=10;
    }
    return ans;

}


int main()
{
    int n;
    cin>>n;
    cin.get();
    int p;
    cin>>p;
    
    cout<<square_root(n,p);

    return 0;
}