#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};


void insertAtHead(node*&head, int data)
{   
    node* newNode = new node(data);
    newNode->next = head;
    head = newNode;
}


void printLL(node*head)
{
    node*temp=head;
    cout<<"head: "<<head<<endl;

    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<" ";
        temp = temp->next;
    }


}

int main()
{
    node *head = NULL;
    insertAtHead(head,50);
    insertAtHead(head,100);
    insertAtHead(head,200);

    printLL(head);
    return 0;
}