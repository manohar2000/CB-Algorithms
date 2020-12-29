#include <iostream>
#include <vector>
using namespace std;


class stack
{
private:
    vector<int> stack;

public:

    bool isempty()
    {
        return stack.size()==0;
    }
    void pop()
    {
        if(!isempty()) return stack.pop_back();
    }

    void push(int data) 
    { 
        stack.push_back(data);
    }

    int top()
    {
        if(isempty()) return -1;

        else return stack[stack.size()-1];
    } 

};


int main()
{
    stack s;
    for(int i=0;i<=5;i++)
    {
        s.push(i*i);
    }

    while(!s.isempty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}