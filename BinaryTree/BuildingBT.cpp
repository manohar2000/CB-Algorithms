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


node* buildTree()
{
    int d;
    cin>>d;

    if(d==-1) return NULL;

    else
    {
        node* root = new node(d);
        root->left = buildTree();
        root->right = buildTree();

        return root;
    }    
}


void printPreOrder(node* root)
{
    if(root==NULL) return;

    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);

}


void printInorder(node* root)
{
    if(root==NULL) return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

void printPostOrder(node* root)
{
    if(root==NULL) return;

    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";

}


int main()
{
    node* root = buildTree();
    printPreOrder(root);
    cout<<endl;
    printInorder(root);
    cout<<endl;
    printPostOrder(root);
    cout<<endl;
    return 0;
}