#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;


int charToint(char arr[],int n)
{
    if(n>=strlen(arr)) return 0;

    return  (arr[n]-'0' )*(pow(10,(strlen(arr)-n-1))) + charToint(arr,n+1);
}


int main()
{
    char a[] = {'1','2','3', '\0'}; 
    cout<<strlen(a)<<endl;

    cout<<charToint(a,0); 

    return 0;
}