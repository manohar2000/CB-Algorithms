#include <iostream>
using namespace std;


/* Calculating diameter - longest path in a binary tree.
There can be three areas in which the diamater of the tree lies. 
op1 - it passes through the root of the tree
op2 - it lies enitrely in the left sub-tree
op3 - it lies entirely in the right sub-tree
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


int diameter(node* root)
{
    if(root==NULL) return 0;

    int lh = heightOfTree(root->left);
    int rh = heightOfTree(root->right);
    int op1 = lh+rh;

    int op2 = diameter(root->left);
    int op3 = diameter(root->right);

    //return max(op1,max(op2,op3));
    return max(op1,max(op2,op3));
}

// for an O(n) implementation we do a post order traversal and calculate the diameter and height
class Pair
{
    public:
        int height;
        int diameter;
};

Pair fastDiameter(node* root)
{
    Pair p;
    if(root==NULL)
    {
        p.diameter = p.height = 0;
        return p;
    }

    // Otherwise
    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height, right.height) + 1;
    p.diameter = max(left.height+right.height, max(left.diameter,right.diameter));
    return p;
}





int main()
{
    node* root = buildtree();
    cout<<diameter(root)<<endl;

    Pair p = fastDiameter(root);
    cout<<p.diameter<<" "<<p.height<<endl;
    return 0;
}