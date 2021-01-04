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

int countNodes(node* root)
{
    if(root==NULL) return 0;

    return countNodes(root->left) + countNodes(root->right) + 1; 
}



int sumofnodes(node* root)
{
    if(root==NULL) return 0;

    return root->data + sumofnodes(root->left) + sumofnodes(root->right); 
}

int main()
{
    node* root = buildtree();
    cout<<countNodes(root)<<endl;
    cout<<sumofnodes(root)<<endl;
    return 0;
}