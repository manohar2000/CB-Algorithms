#include <iostream>
#include <string>
using namespace std;

char keypad[][10] = {",",",","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void keypadSubsequences(char arr[], char out[], int i, int j)
{
    if(arr[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<",";
        return;
    }

    int dig = arr[i] - '0';

    if(dig==0 || dig==1)
    {
        return keypadSubsequences(arr,out,i+1,j);
    }


    
    for(int k=0;keypad[dig][k]!='\0';k++)
    {
        out[j] = keypad[dig][k];
        keypadSubsequences(arr,out,i+1,j+1);
    }


}


int main()
{
   
    char arr[100];
    cin>>arr;

    char out[100];   
    keypadSubsequences(arr,out,0,0);

    return 0;
}