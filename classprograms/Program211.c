#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head,PNODE Tail)
{
    if((Head==NULL)&&(Tail==NULL))
    {
        return;
    }
    do
    {
        printf("|%d|->",Head->data);
        Head=Head->next;
    } while (Head!=Tail->next);
    
    printf("\n");
}
int Count(PNODE Head ,PNODE Tail)
{
    int iCnt=0;
    if((Head==NULL)&&(Tail==NULL))
    {
        return 0;
    }
    do
    {
        iCnt++;
        Head=Head->next;
    } while (Head!=Tail->next);
    
    return iCnt;
}
void InserFirst(PPNODE Head,PPNODE Tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if((*Head==NULL)&&(*Tail==NULL)) //LL is empty
    {
        *Head=newn;
        *Tail=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
    (*Tail)->next=*Head;  //To maintain circular nature
}
void InsertLast(PPNODE Head,PPNODE Tail,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if((*Head==NULL)&&(*Tail==NULL)) //LL is empty
    {
        *Head=newn;
        *Tail=newn;
    }
    else
    {
        (*Tail)->next=newn;
        *Tail=newn;
    }
    (*Tail)->next=*Head;  //To maintain circular natur
}
void InsertAtPos(PPNODE Head,PPNODE Tail,int no ,int ipos)
{

}
void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if((*Head==NULL)&&(*Tail==NULL))
    {
        return;
    }
    else if(*Head==*Tail)
    {
        free(*Head);
        *Head=NULL;
        *Tail=NULL;
    }
    else
    {
        *Head=(*Head)->next;
        free((*Tail)->next);
        (*Tail)->next=*Head;
    }
}
void DeleteLast(PPNODE Head,PPNODE Tail)
{
    PNODE temp=*Head;

      if((*Head==NULL)&&(*Tail==NULL))
    {
        return;
    }
    else if(*Head==*Tail)
    {
        free(*Head);
        *Head=NULL;
        *Tail=NULL;
    }
    else
    {
        while(temp->next!=*Tail)
        {
            temp=temp->next;
        }
        free(*Tail);
        *Tail=temp;
        (*Tail)->next=*Head;
    }
}
void DeleteAtPos(PPNODE Head,PPNODE Tail,int ipos)
{

}

int main()
{
    PNODE first=NULL;
    PNODE last=NULL;
    int iRet=0;

    InserFirst(&first,&last,51);
    InserFirst(&first,&last,21);
    InserFirst(&first,&last,11);

    InsertLast(&first,&last,101);

    Display(first,last);
    iRet=Count(first,last);
    printf("Number of elements are:%d\n",iRet);

    DeleteFirst(&first,&last);
    DeleteLast(&first,&last);

    Display(first,last);
    iRet=Count(first,last);
    printf("Number of elements are:%d\n",iRet);
    return 0;
}