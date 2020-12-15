#include <iostream>
#include <cstring>
using namespace std;

// char *strtok(char *s,char ,*delimiters)
// returns a token on each statement call
// on the first call function should be passed with a string argument for 's'
// on the subsequent calls we should pass the string argument as null

int main()
{
    char c[100] = "This is a statement";
    
    char *ptr = strtok(c," ");
    cout<<ptr<<endl;
    
    while(ptr!=NULL)
    {
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }
    
    return 0;
}