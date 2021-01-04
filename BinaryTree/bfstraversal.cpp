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




int main()
{
    node* root = buildtree();
    bfs(root);
    return 0;
}