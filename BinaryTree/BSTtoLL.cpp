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

class LinkedList{
    public:
        node*head;
        node*tail;
};

LinkedList flatten(node*root){
    LinkedList l;

    if(root==NULL){
        l.head = l.tail = NULL;
        return l;
    }
    // Leaf Node
    if(root->left == NULL && root->right==NULL){
        l.head = l.tail = root;
        return l;
    }
    // Left is Not NULL
    if(root->left!=NULL && root->right==NULL){
        LinkedList leftLL = flatten(root->left);
        leftLL.tail->right = root;

        l.head = leftLL.head;
        l.tail = root;
        return l;
    }
    //Right is Not NULL
    if(root->left==NULL && root->right!=NULL){
        LinkedList rightLL = flatten(root->right);
        root->right = rightLL.head;

        l.head = root;
        l.tail  = rightLL.tail;
        return l;
    }
    //Both Sides are not NULL
    LinkedList leftLL = flatten(root->left);
    LinkedList rightLL = flatten(root->right);

    leftLL.tail->right = root;
    root->right = rightLL.head;

    l.head = leftLL.head;
    l.tail = rightLL.tail;
    return l;

}

int main()
{

    node* root = build();

    LinkedList l = flatten(root);

    node*temp = l.head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"--->";
        temp = temp->right;
    }
    cout<<endl;

    return 0;
}