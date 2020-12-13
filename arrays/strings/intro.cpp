#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool compare(string a,string b)
{
    return a>b;
}
int main()
{
    string s("hello mc");
    cout<<s<<endl;
    
    string s2 = "aur kya chal rha hain";
    cout<<s2<<endl;
    cout<<"length:"<<s2.length()<<endl;
    
    string s3;
    getline(cin,s3);
    
    cout<<s3<<endl;
    
    string arr[] = {"bkl","mc","bsdk"};
    sort(arr,arr+3,compare);
    
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
    
  return 0;
  
}