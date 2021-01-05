#include <iostream>
#include <climits>
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



bool isBST(node* root, int minV, int maxV)
{
    if(root==NULL) return true;

    if(root->data>=minV && root->data<=maxV && isBST(root->left,minV,root->data) && isBST(root->right,root->data,maxV)) 
    {
        return true;
    }
    else
    {
        return false;
    }
    

}

int main()
{
    node* root = build();
    int minV = INT_MIN;
    int maxV = INT_MAX;

    cout<<isBST(root,minV,maxV)<<endl;

    return 0;
}