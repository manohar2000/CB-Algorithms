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

void buildlist(node*&head)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertAtTail(head,data);
        cin>>data;        
    }
}


void reverseLL(node*&head)
{
    node* curr = head;
    node* prev = NULL;
    node* N;

    while(curr!=NULL)
    {
        N = curr->next;
        curr->next = prev;
        prev = curr;
        curr = N;
    }
    head = prev;
    
}


int main()
{


    node* head = NULL;
    
    insertAtHead(head,50);
    insertAtHead(head,100);
    insertAtHead(head,200);

    insertAtTail(head,500);

    insertInMiddle(head, 75,1);

    printLL(head);

    reverseLL(head);

    cout<<endl;
    printLL(head);
    
    return 0;
}