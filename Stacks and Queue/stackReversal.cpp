#include <iostream>
#include <stack>
using namespace std;

void transferN(stack<int>& s1, stack<int> &s2, int N)
{
    for(int i=0;i<N;i++)
    {
        s2.push(s1.top());
        s1.pop();
    }

}

void reverseStack(stack<int>& s1)
{    
    stack <int> s2;
    int n = s1.size();
    int temp;

    for(int i=0;i<n;i++)
    {
        int temp = s1.top();
        s1.pop();
        transferN(s1,s2,n-i-1);
        s1.push(temp);
        transferN(s2,s1,n-i-1);
    }

}



int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);


    reverseStack(s);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}