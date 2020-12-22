#include <iostream>
#include <string>
using namespace std;

string spelling[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void IntToSpell(int n)
{
    if(n==0) return;

    IntToSpell(n/10);

    cout<<spelling[n%10]<<" ";
    
}


int main()
{
    int n;
    cin>>n;
    IntToSpell(n);    
    return 0;
}