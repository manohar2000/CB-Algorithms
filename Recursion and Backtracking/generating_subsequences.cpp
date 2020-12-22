#include <iostream>
using namespace std;

void generateSubsequences(char arr[],char out[], int i, int j)
{
    if(arr[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    // 1.Include the current char
    out[j] = arr[i];
    generateSubsequences(arr,out,i+1,j+1);
    // 2. Not including the char
    generateSubsequences(arr,out,i+1,j);


}


int main()
{
    char arr[100];
    char out[100];

    cin>>arr;
    generateSubsequences(arr,out,0,0);

    return 0;
}