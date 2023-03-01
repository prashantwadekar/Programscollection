//singly ll
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class SinglyLL
{
private:
    PNODE first;
    int size;

public:
    SinglyLL();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

SinglyLL::SinglyLL()
{
    first=NULL;
    size=0;
}

void SinglyLL::InsertFirst(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        newn->next=first;
        first=newn;
    }
    size++;
}

void SinglyLL::InsertLast(int no)
{
    PNODE newn=new NODE;
    newn->data=no;
    newn->next=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        PNODE temp=first;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    size++;
}

void SinglyLL::InsertAtPos(int no,int ipos)
{
    if(ipos<1 || ipos>ipos+1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos==1)
    {
        InsertFirst(no);
    }
    else if(ipos==size+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp=first;
        PNODE newn=new NODE;

        newn->data=no;
        newn->next=NULL;

        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        size++;
    }
}

void SinglyLL::DeleteFirst()
{
    PNODE temp=first;

    if(first==NULL)
    {
        return;
    }
    else if(first->next==NULL)
    {
        delete first;
        first=NULL;
    }
    else
    {
        first=first->next;
        delete temp;

        size--;
    }
}

void SinglyLL::DeleteLast()
{
    if(first==NULL)
    {
        return;
    }
    else if(first->next==NULL)
    {
        delete first;
        first=NULL;
    }
    else
    {
        PNODE temp=first;

        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    size--;
}

void SinglyLL::DeleteAtPos(int ipos)
{
    if(ipos<1 || ipos>size)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(ipos==1)
    {
        DeleteFirst();
    }
    else if(ipos==size)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp=first;
        PNODE targated=NULL;

        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        targated=temp->next;
        temp->next=targated->next;
        delete targated;
        size--;
    }
}

void SinglyLL::Display()
{
    PNODE temp=first;

    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|\t";
        temp=temp->next;
    }
    cout<<"\n";
}

int SinglyLL::Count()
{
    return size;
}

int main()
{
    int choise=1,iValue=0,pos=0,iret=0;
    SinglyLL obj;

    while(choise!=0)
    {
        cout<<"_______________________________________________\n\n";
        cout<<"Enter 1: insert at 1st position\n";
        cout<<"Enter 2: insert at last position\n";
        cout<<"Enter 3: insert at specific position\n";
        cout<<"Enter 4: delete at 1st position\n";
        cout<<"Enter 5: delete at last position\n";
        cout<<"Enter 6: delete at specific position\n";
        cout<<"Enter 7: display elements from linked list\n";
        cout<<"Enter 8: dislay count of nodes from linked list\n";
        cout<<"Enter 0: to terminate the application\n";
        cout<<"_______________________________________________\n";
    
        cout<<"Enter choise:";
        cin>>choise;

        switch(choise)
        {
            case 1:
                cout<<"Enter data:";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;
        
            case 2:
                cout<<"Enter data:";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter data:";
                cin>>iValue;
                cout<<"Enter position:";
                cin>>pos;
                obj.InsertAtPos(iValue,pos);
                break;

            case 4:
                obj.DeleteFirst();
                break;

            case 5:
                obj.DeleteLast();
                break;

            case  6:
                cout<<"Enter position:";
                cin>>pos;
                obj.DeleteAtPos(pos);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                iret=obj.Count();
                cout<<"Count of node in linked list is:"<<iret;
                cout<<"\n";
                break;

            case 0:
                cout<<"Thank you for using linked list.\n";
                break;

            default:
                cout<<"Enter proper choise.\n";
                break;
        }
    }

    return 0;
}