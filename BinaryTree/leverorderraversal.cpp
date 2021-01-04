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


int heightOfTree(node* root)
{
    
    if(root==NULL) return 0;

    int lh = heightOfTree(root->left);
    int rh = heightOfTree(root->right);
    return max(lh,rh) + 1; 
}


void printKthLevel(node* root, int k)
{
    if(root==NULL) return;

    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }

    printKthLevel(root->left, k-1);
    printKthLevel(root->right, k-1);
}

int main()
{
    node* root = buildtree();
    cout<<heightOfTree(root)<<endl;
    printKthLevel(root,3);
    return 0;
}