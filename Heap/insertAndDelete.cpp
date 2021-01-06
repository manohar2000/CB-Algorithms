#include <iostream>
#include <vector>
using namespace std;

class heap
{
    vector<int> v;
    bool minHeap;


    bool compare(int a, int b)
    {
        if(minHeap) return a<b;
        else return a>b;
    }

    void heapify(int i)
    {
        int left = 2*i;
        int right = 2*i + 1;

        int minIndex = i;

        if(left<v.size() && compare(v[left],v[i])) minIndex = left;

        if(right<v.size() && compare(v[right],v[minIndex])) minIndex = right;

        if(minIndex!=i)
        {
            swap(v[i],v[minIndex]);
            heapify(minIndex);
        }
    }

    public:

        heap(bool type=true)
        {
            minHeap = type;
            v.push_back(-1);
        }
        

        void push(int data)
        {  
            int index = v.size()-1;          
            int parent = index/2;
            v.push_back(data);
            while(compare(v[index],v[parent]) && index>1)
            {
                swap(v[parent],v[index]);
                index = parent;
                parent= parent / 2;
            }
        }


        void pop()
        {
            //Remove the topmost element
            int last = v.size() - 1;
            swap(v[1],v[last]);
            v.pop_back();
            heapify(1);
        }






        bool empty()
        {
            return v.size()==1;
        }
        int top()
        {
            return v[1];
        }
};



int main()
{
    heap h;//min heap
    //heap h(false); //max heap
    h.push(5);
    h.push(15);
    h.push(2);
    h.push(20);
    h.push(3);

    while(!h.empty())
    {
        cout<<h.top()<<endl;
        h.pop();
    }
    return 0;
}