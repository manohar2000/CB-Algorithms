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



bool iscyclepresent(node*& head)
{
    if(head==NULL || head->next==NULL) return false;
    else
    {
        node* slow = head;
        node* fast = head->next;

        while(fast!=NULL && fast->next!=NULL)
        {
            if(slow==fast) return true;
            slow = slow->next;
            fast = fast->next->next;            
        }

        return false;
    }
    

}
// if we want to find the starting point of the loop, we'll have to move the slow to the head
// and then move the slow and fast pts one step in each iteration.
// the place where both the ptrs meet is the starting node of the linked list


int main()
{
    node* head = NULL;
    cin>>head;

    // creating cycle for detection 
    head->next->next = head;

    cout<<iscyclepresent(head)<<endl;

    return 0;
}