#include <iostream>
#include <cstdio>
#include <queue>
#include <cmath>
using namespace std;

/*
Question : To find the median at any given point of time from  a stream of integers
Solution : Maintain two heaps left and right. The left heap will be a max heap and the right heap will be a min heap

Until we are asked to print the median :
    if there are any elements in the right queue and right.top() is smaller than current element then add into right queue
    else add in left queue

    now if the sizeof(left_queue)-sizeof(right_queue)==2
        then push the left top in the right queue and pop the left queue 
    else if( sizeof(right_queue)-sizeof(left_queue)==2
        then push the right top in the left queue and pop the right queue.
 
If we are asked to print the median then
 if size of both the heaps are same then print the average of both top elements
 else print the top of the heap having more size
 
*/

int main()
{   
    int data;
    priority_queue<int,vector<int>,greater<int>> rightmin;
    priority_queue<int> leftmax;

    while(scanf("%d",& data)!=EOF)
    {
        if(data==-1)
        {
            // if size is equal then print the averag of the middle two elements
            if(rightmin.size()==leftmax.size()) cout<<(rightmin.top()+leftmax.top())/2<<endl;

            // if sizes are not equal the return the top element of the queue having the bigger size
            else
            {
                if(rightmin.size()>leftmax.size()) cout<<(rightmin.top())<<endl;

                else cout<<leftmax.top()<<endl;                
            }            
        }

        else
        {    
            if(rightmin.size()>0 && rightmin.top()<data) rightmin.push(data); 
            else leftmax.push(data);


            if(leftmax.size()-rightmin.size()==2)
            {
                 rightmin.push(leftmax.top());
                 leftmax.pop();
                 
            }
            else if(rightmin.size()-leftmax.size()==2)
            {
                leftmax.push(rightmin.top());
                rightmin.pop();
            }
        }    

    }
    return 0;
}
