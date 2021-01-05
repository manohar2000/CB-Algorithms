#include <iostream>
#include <queue>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;

        node(int d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};



void bfs(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL); // to print every level in new lines

    while(!q.empty())
    {
        node* f = q.front();

        // including null after every level. We will print normally and will add a null only when previous level's nodes have been printed completely.
        if(f==NULL)
        {
            q.pop();
            if(!q.empty())
            {
                cout<<endl;
                q.push(NULL); // we add null only until the queue is not empty, else it will become an infinite loop/
            }
        }

        else
        {
            q.pop();
            cout<<f->data<<" ";        

            if(f->left) q.push(f->left);

            if(f->right) q.push(f->right);
        }
    }
}



node* buildtreefromarray(int arr[], int start, int end)
{
    if(start>end) return NULL;

    int mid = (start+end)/2;

    node* new_node = new node(arr[mid]);

    new_node->left = buildtreefromarray(arr,start,mid-1);
    new_node->right = buildtreefromarray(arr,mid+1,end);
    return new_node;
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7};    
    int size = 7;


    node* root = buildtreefromarray(arr,0,size-1);
    bfs(root);
    return 0;
}