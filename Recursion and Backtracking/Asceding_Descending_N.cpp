#include <iostream>
using namespace std;

// Aim : printing no.'s till n using recursion in ascending and descending order

void printAscending(int n)
{
    // Here we are recusrisvely building the stack until we reach 0 and then returning it's values
    if(n==0) return;
    printAscending(n-1);
    cout<<n<<" ";

}

void printDescending(int n)
{
    // In this we are printing n as soon we encountering it and then calling the func for (n-1)
    if(n==0) return ;

    cout<<n<<" ";
    printDescending(n-1);
}


int main()
{
    int n;
    cin>>n;

    printAscending(n);
    cout<<endl;
    printDescending(n);

    return 0;
}