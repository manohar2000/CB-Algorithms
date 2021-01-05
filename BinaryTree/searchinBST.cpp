#include <iostream>
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

bool searchinBST(node* root, int data)
{
    if(root==NULL) return false;

    else if(root->data==data) return true;

    else if(root->data<data) return searchinBST(root->right,data);

    else return searchinBST(root->left,data);

}

int main()
{
    node* root = build();
    printInorder(root);
    cout<<endl;

    int data;
    cin>>data;

    cout<<searchinBST(root,data)<<endl;

    return 0;
}