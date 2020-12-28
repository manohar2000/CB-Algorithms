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



int kthFromLast(node*&head, int p)
{
    if(head==NULL) return -1;
    else if(head->next==NULL) return head->data;

    else if(p>length(head)) return -1;

    else
    {
        node* slow = head;
        node* fast = head;
        int i = 0;

        while(i<=p)
        {
            fast = fast->next;
            i+=1;
        }

        while(fast!=NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }

        return slow->data;
    }
    
}



int main()
{


    node* head = NULL;
    
    insertAtHead(head,50);
    insertAtHead(head,100);
    insertAtHead(head,200);
    insertInMiddle(head, 75,1);
    insertAtTail(head,500);

    
    printLL(head);    
    cout<<endl;

    int p = 0;
    cin>>p;
    cout<<kthFromLast(head,p)<<endl;
    
    return 0;
}