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

node* buildtree()
{   
    int data;
    cin>>data;
    if(data==-1) return NULL;

    node* root = new node(data);
    root->left = buildtree();
    root->right = buildtree();

    return root;
}


// Building a queue in which we had store both the children of the root node
// and keep on iteratively popping them and push their children into the queue.

void bfs(node* root)
{
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* f = q.front();
        q.pop();
        cout<<f->data<<" ";        

        if(f->left) q.push(f->left);

        if(f->right) q.push(f->right);
    }
}




int main()
{
    node* root = buildtree();
    bfs(root);
    return 0;
}