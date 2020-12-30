#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str)
{
    stack <char> s;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(') s.push('(');

        else if(str[i]==')')
        {
            if(s.empty()) return false;
            else s.pop();
        }
    }

    return s.empty();
}

int main()
{
    string s;
    cin>>s;
    cout<<isBalanced(s);  
    return 0;
}