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


int replaceNodebySum(node* root)
{
    if(root==NULL) return 0;

    if(root->left == NULL && root->right==NULL) return root->data;

    // recursive part
    int leftSum = replaceNodebySum(root->left);
    int rightSum = replaceNodebySum(root->right);

    int temp = root->data;

    root->data = leftSum + rightSum;
    return temp + root->data;

}

void printPreOrder(node* root)
{
    if(root==NULL) return;

    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);

}



int main()
{
    node* root = buildtree();
    replaceNodebySum(root);
    printPreOrder(root);
    return 0;
}