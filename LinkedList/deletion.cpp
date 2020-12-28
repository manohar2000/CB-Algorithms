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

int length(node *&head)
{
    int len = 0;
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
        len+=1;        
    }

    return len;
}


void insertAtTail(node *&head, int data)
{
    if(head==NULL)
    {
        head = new node(data);
        return;
    }

    node* temp = head;    

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    
    node* tail = new node(data);
    temp->next = tail;

    return;

}

void insertInMiddle(node*&head, int data, int p)
{
    if(head==NULL||p==0) insertAtHead(head,data);

    if(p>length(head)) insertAtTail(head,data);

    int i = 0;
    node* temp = head;
    while(i<=p-1)
    {
        temp = temp->next;
        i+=1;
    }

    node* middle = new node(data);
    middle->next = temp->next;
    temp->next = middle;

    return;

}


void printLL(node*head)
{
    node*temp=head;
    //cout<<"head: "<<head<<endl;

    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<" ";
        temp = temp->next;
    }


}

// ------------------DELETION PART-----------------------------------------//

void deleteAtTail(node* &head)
{
    node* temp = head;
    node* prev;
    while(temp->next!=NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    delete temp;

}

void deleteAtHead(node *&head)
{
    if(head==NULL) return;
    node* temp = head;
    head = head->next;
    delete temp;

}


void deleteAtMiddle(node *&head, int p)
{
    if(p>length(head)) return;
    if(p==length(head))
    {
        deleteAtTail(head);
    }
    if(p==0)
    {
         deleteAtHead(head);
    }
    node* temp = head;
    node* prev=NULL;
    int i=0;
    while(i<p && temp!=NULL)
    {
        prev = temp;
        temp = temp->next;
        i+=1;
    }

    prev->next = temp->next;
    delete temp;
    return;
}


int main()
{
    node *head = NULL;
    insertAtHead(head,50);
    insertAtHead(head,100);
    insertAtHead(head,200);

    insertAtTail(head,500);

    insertInMiddle(head, 75,1);   

    printLL(head);
    cout<<endl;

    deleteAtHead(head);
    deleteAtTail(head);
    printLL(head);
    cout<<endl;

    deleteAtMiddle(head, 0);
    printLL(head);
    return 0;
}