//doubly linear linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node  //20 byte structure
{
    int data;
    struct node *next;
    struct node *prev;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next= *Head;
        (*Head)->prev=newn;

        *Head=newn;
    }
}

void InsertLast(PPNODE Head,int no)
{
       PNODE newn =NULL;
       PNODE temp=*Head;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
}

void Display(PNODE Head)
{
    while(Head!= NULL)
    {
        printf("|%d|->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt=0;
    while(Head!=NULL)
    {
        iCnt++;
        Head=Head->next;
    }
    return iCnt;
}
void DeleteFirst(PPNODE Head)
{
    PNODE temp=*Head;
    if(*Head != NULL) //LL contains atleast one node
    {
        *Head=(*Head)->next;
        free(temp);
        if(*Head!=NULL)
        {
            (*Head)->prev=NULL;
        }
    }
}
void DeleteLast(PPNODE Head)
{
    PNODE temp=*Head;
        if(*Head==NULL)
    {
        return;
    }
    else if((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;

        free(temp);
    }
}
void InsertAtPos(PPNODE Head,int no ,int ipos)
{
    int size=Count(*Head);
    int i=0;
    PNODE temp=*Head;
    PNODE newn=NULL;

    if((ipos<1)||(ipos>size+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos==1)
    {
        InsertFirst(Head,no);
    }
    else if(ipos==size+1)
    {
        InsertLast(Head,no);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));

        newn->next=NULL;
        newn->prev=NULL;
        newn->data=no;

        for(i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        newn->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
    }
}
void DeleteAtPos(PPNODE Head ,int ipos)
{
    int size=Count(*Head);
    int i=0;
    PNODE temp=*Head;

    if((ipos<1)||(ipos>size))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos==1)
    {
        DeleteFirst(Head);
    }
    else if(ipos==size)
    {
        DeleteLast(Head);
    }
    else
    {
        for(i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }
}
int main()
{
    PNODE first =NULL;

    int iChoice=1,value=0,iRet=0,pos=0;

    while(iChoice !=0)
    {
        printf("\n....................................................\n");
        printf("Enter your desired operation that you want to perform on LinkedList\n");
        printf("1:Insert the node at first position\n");
        printf("2:Insert the node at last position\n");
        printf("3:Insert the node at the desired position\n");
        printf("4:Delete the first node \n");
        printf("5:Delete the last node \n");
        printf("6:Delete the node at the desired position\n");
        printf("7:Display the linked list\n");
        printf("8:count the number of nodes from linked list\n");
        printf("0:Terminate the application\n");
        scanf("%d",&iChoice);
        printf("\n...................................................\n");

        switch(iChoice)
        {
            case 1:
                 printf("Enter the data to insert\n");
                 scanf("%d",&value);
                 InsertFirst(&first,value);
                 break;
            
            case 2:
                 printf("Enter the data to insert\n");
                 scanf("%d",&value);
                 InsertLast(&first,value);
                 break;

            case 3:
                 printf("Enter the data to insert\n");
                 scanf("%d",&value);
                 printf("Enter the position\n");
                 scanf("%d",&pos);
                 InsertAtPos(&first,value,pos);
                 break;

            case 4:
                DeleteFirst(&first);
                break;

            case 5:
                 DeleteLast(&first);
                 break;

            case 6:
                 printf("Enter the position\n");
                 scanf("%d",&pos);
                 DeleteAtPos(&first,pos);
                 break;

            case 7:
                 printf("Elements of linked list are\n");
                 Display(first);
                 break;

            case 8:
                 iRet=Count(first);
                 printf("Number of elements are:%d\n",iRet);
                 break;

            case 0:
                printf("Thanks for using Marvellous Linked List\n");
                break;

            default:
                printf("Enter proper choice\n");
                break;
        
        }

    }
    return 0;
}