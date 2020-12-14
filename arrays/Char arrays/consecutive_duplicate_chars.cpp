#include <iostream>
#include <cstring>
using namespace std;

// remove consecutive dupicate characters from a string
// Logic : take two consecutive indices i,j.
// Increment j until arr[i]==arr[j], else replace arr[j] with i+1 th index. 
void conschars(char arr[])
{
    int n = strlen(arr);
    if(n==1 | n==0)
    {
        return;
    }
    
    else
    {
        int i = 0;
        int j = 1;
        while(j<=n-1)
        {
            if(arr[j]==arr[i])
            {
                j+=1;
            }
            else
            {
                arr[i+1] = arr[j];
                i+=1;
                j+=1;
            }
            
        }
        arr[i+1] = '\0'; //the ith index will be at the last unique index. Add a null char to terminate the array.
        return;
    }
    
}

int main()
{
    char s[10000];
    cin.getline(s,1000);
    conschars(s);
    
    for(int i=0;i<strlen(s);i++)
    {
        cout<< s[i];
    }
    return 0;
}