#include <iostream>
using namespace  std;

/* The aim is to check if a no. if prime or not
   1st appoach - to start from 2 and loop till n and check if the no. if divisible by n or not
   2nd - to start from 2 and check till n/2
   3rd - to start from 2 and check till sqrt(n). The idea of this is that there will always be a no. less than sqrt(n) which is divisible by n
    this is because sqrt(n)*sqrt(n)=n i.e if the first term increases then the second term will be less than sqrt(n) and vice versa

   4th - Prime Seive - generating a list of prime no.'s till n - https://www.youtube.com/watch?v=nDPo9hsDNvU
*/


int main()
{
    int n;
    cin>>n;
    int arr[n] = {0}; // initialzing elements with 0
    
    arr[0] = arr[1] = 0;
    arr[2] = 1;
    for(int i=3;i<=n;i+=2)
    {
        arr[i]=1;
    }


    // generating arr of all no. till n;
    for(int i=3;i<=n;i+=2)
    {
        arr[i] = 1;
    }

    for(int i=3;i<=n;i++)
    {
        if(arr[i]%2!=0)
        {
            for(int j=i*i;j<=n;j+=2*i)
            {
            /* the idea of i*i is that the all the no. before i*i would have been striked off by some other no.
            the idea of incrementing by 2*i is that if we increment by one, then odd+odd==even which would have already been striked of by 2
            */
                arr[j]=0;
            }

        }
    }


    for(int i=0;i<=n;i++)
    {     
        
        if(arr[i]==1)
        {
            cout<<i<<" ";
        }
        
    }
    return 0;
}