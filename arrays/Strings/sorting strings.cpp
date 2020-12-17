#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
    // the in-built sorting algorithm swaps the elements when our comparator function returns True.
    if(a.length()>b.length())
    {
        return a>b;
    }
    
}

int main()
{
    int n;
    cin>>n;
    cin.get();
    
    string s[100];
    
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]); //cin.getline() does not work for string variables
    }
    cout<<"---------------------"<<endl;
    
    sort(s,s+n,compare);
    
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    
    return 0;
}
