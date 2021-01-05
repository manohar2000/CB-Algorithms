#include <iostream>
#include <queue>
using namespace std;

/* Deletion in BST basically has 3 cases
 1. Node has no children - delete the node and return NULL 
 2. Node has one child - keep a temp variable as replace the curr node with the immediate node
 3. Node has no children - replace it with inorder successor.
*/

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


node* deleteinBST(node* root, int data)
{
    if(root==NULL) return NULL;


    else if(data<root->data)
    {
        root->left = deleteinBST(root->left,data);
        return root;
    }

    else if(data==root->data)
    {
        // Case 1
        if(root->left==NULL && root->right==NULL) 
        {
            delete root;
            return NULL;
        }

        // Case 2
        else if(root->left!=NULL && root->right==NULL) // no child in the right side
        {
            node* temp = root->left;
            delete root;
            return temp;        
        }

        else if(root->left==NULL && root->right!=NULL) // no child in the left side
        {
            node* temp = root->right;
            delete root;
            return temp;        
        }

        // Case 3
        else
        {
            node* temp = root->right;
            while(temp->left!=NULL)
            {
                temp = temp->left;
            }

            root->data = temp->data;
            root->right = deleteinBST(root->right,temp->data);    
            return root;
        }   
    }


    else
    {
        root->right = deleteinBST(root->right,data);
        return root;
    }
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
    bfs(root);
    cout<<endl<<"--------------------------"<<endl;;

    int data;
    cin>>data;

    deleteinBST(root,data);

    bfs(root);
    return 0;
}