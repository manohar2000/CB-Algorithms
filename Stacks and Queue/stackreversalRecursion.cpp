#include <iostream>
#include <stack>
using namespace std;

// explanation : https://www.youtube.com/watch?v=fEauTlo6J-w

void place_at_bottom(stack <int> &s, int k)
{
    if(s.empty())
    {
        s.push(k);
        return;
    }

    int y = s.top();
    s.pop();
    place_at_bottom(s,k);
    s.push(y);
}

void reverseRecursion(stack <int> &s)
{
    if(s.empty()) return;

    int x = s.top();
    s.pop();
    reverseRecursion(s);
    place_at_bottom(s,x);

}


int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseRecursion(s);    

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();

    }
    return 0;
}