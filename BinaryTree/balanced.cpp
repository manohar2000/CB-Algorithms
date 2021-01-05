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


class hbpair
{
    public:
        int height;
        bool balanced;
};

hbpair isbalanced(node* root)
{
    hbpair p;
    if(root==NULL)
    {
        p.height = 0;
        p.balanced = true;
        return p;
    }

    hbpair left = isbalanced(root->left);
    hbpair right = isbalanced(root->right);

    p.height = max(left.height,right.height) + 1;

    if(abs(left.height - right.height)<=1 &&   left.balanced && right.balanced)
    {
        p.balanced = true;
        return p;
    }

    else
    { 
        p.balanced=false;
        return p;
    }
}


int main()
{
    node* root = buildTree();
    cout<<isbalanced(root).balanced<<endl;
    return 0;
}