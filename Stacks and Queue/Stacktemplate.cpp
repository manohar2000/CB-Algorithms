#include <iostream>
#include <stack> // template has push(data), pop() , top() and empty() functions
using namespace std;


int main()
{
    stack<int> s;
    for(int i=1;i<=5;i++)
    {
        s.push(i*i);
    }

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}