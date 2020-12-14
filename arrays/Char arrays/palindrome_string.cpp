#include <iostream>
#include <cstring>
using namespace std;

bool ispalindrome(char s[])
{
    int i = 0;
    int j = strlen(s)-1;
    while(i<j)
    {
        if(s[i]==s[j])
        {
            i+=1;
            j-=1;
        }
        else
        {
            return false;
        }
        return true;
    }
}

int main()
{
    char s[10000];
    cin.getline(s,1000);
    cout<< ispalindrome(s) <<endl;
    return 0;
}