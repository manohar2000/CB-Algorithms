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


istream& operator>>(istream &is,node*&head)
{
    buildlist(head);
    return is;
}

ostream& operator<<(ostream &os,node*&head)
{
    printLL(head);
    return os;
}


node* merge(node* a,node* b)
{
    if(a==NULL) return b;

    else if(b==NULL) return a;

    else
    {
        node* c;
        if(a->data < b->data)
        {
            c = a;
            c->next = merge(a->next,b);
        }
        else
        {
            c = b;
            c->next = merge(a,b->next);
        }

        return c;
        
    }

    
    
}


int main()
{
    node* head = NULL;
    node* head2 = NULL;
    cin>>head>>head2;
    cout<<head<<endl<<head2<<endl;;   

    head = merge(head,head2);
    cout<<head<<endl;

    return 0;
}