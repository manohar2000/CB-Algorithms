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


node* insertinBST(node* root, int data)
{
    if(root==NULL)
    { 
        return new node(data);
    }

    if(data<=root->data)
    {
        root->left = insertinBST(root->left,data);
    }

    else
    {
        root->right = insertinBST(root->right,data);
    }

    return root;
}



node* build()
{
    int d;
    cin>>d;
    
    node* root = NULL;

    while(d!=-1)
    {
        root = insertinBST(root, d);
        cin>>d;
    }

    return root;
}

void printInorder(node* root)
{
    if(root==NULL) return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}


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
    node* root = build();
    printInorder(root);
    cout<<endl;
    bfs(root);
    return 0;
}