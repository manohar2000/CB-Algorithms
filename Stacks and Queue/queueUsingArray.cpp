#include <iostream>
using namespace std;

template<typename T>
class Queue
{
    T* arr;
    int f;
    int r;
    int ms;
    int cs;

public:
    //Constructors
    Queue(int ds=4)
    {
        f = 0;
        ms = ds;
        r = ms-1;
        arr = new T[ms];
        cs = 0;
    }

    bool isfull() 
    {
        return cs==ms;
    }

    bool isEmpty()
    {
        return cs==0;
    }

    void push(T data)
    {
        if(!isfull())
        {
            r = (r+1)%ms;
            arr[r] = data;
            cs++;
        }
    }

    void pop()
    {
        if(!isEmpty())
        {
            f = (f+1)%ms;
            cs--;
        }
    }

    T getFront()
    {
        return arr[f];
    } 
};


int main()
{
    Queue<int> q;
    for(int i=0;i<=6;i++)
    {
        q.push(i);
    }
    q.pop();
    q.push(4);

    while(!q.isEmpty())
    {
        cout<<q.getFront()<<" ";
        q.pop();
    }

    return 0;
}