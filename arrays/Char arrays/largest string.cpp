#include <iostream>
#include <cstring>
using namespace std;



int main()
{
    int n;
    cout<< "enter the no. of strings" <<endl;
    cin>>n;
        cin.get();

    char largest[1000];
    char curr[1000];
    
    cin.getline(largest,1000);
    int max_len = strlen(largest);
    
    for(int i=0;i<n-1;i++)
    {
        cin.getline(curr,1000);
        if(strlen(curr)>max_len)
        {
            strcpy(largest,curr); // strcpy function can be used to copy string
            max_len = strlen(largest);
        }
    }
    cout<<"-----------"<<endl;
    cout<<"largest string"<<endl;
    cout<<largest<<endl;
    cout<<max_len<<endl;
    return 0;
}