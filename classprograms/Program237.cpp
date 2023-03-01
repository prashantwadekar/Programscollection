//tree
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head,int no)
{
    PNODE temp=*Head;
    PNODE newn=new NODE;

    newn->data=no;
    newn->lchild=NULL;
    newn->rchild=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {

        while(1)  //unconditional loop for( ; ;)
        {
            if(temp->data==no)
            {
                cout<<"Duplicate NODE\n";
                delete newn;
                break;
            }
            else if(no<(temp->data)) //lahan data
            {
                if(temp->lchild==NULL)
                {
                    temp->lchild=newn;
                    break;
                }
                temp=temp->lchild;
            }
            else if(no>(temp->data)) //motha data
            {
               if(temp->rchild==NULL)
                {
                    temp->rchild=newn;
                    break;
                }
                temp=temp->rchild;
            }
        }
    }
}


bool Search(PNODE Head,int no)
{
    bool flag=false;
    if(Head==NULL)    //tree is empty
    {
        return false;
    }
    else   //tree contains atleast one node
    {
        while(Head !=NULL)
        {
            if(Head->data==no)  //node sapdla
            {
                flag=true;
                break;
            }
            else if(no>(Head->data)) //data motha ahe
            {
                Head=Head->rchild;
            }
            else if(no<(Head->data)) //data lahan ahe
            {
                Head=Head->lchild;
            }
        }
    }
    return flag;
}
int main()
{
    int  no=0;
    bool bRet=false;

    PNODE first=NULL;

    Insert(&first,51);
    Insert(&first,21);
    Insert(&first,101);

    cout<<"Enter Number to Search:\n";
    cin>>no;

    Search(first,no);

    if(bRet==true)
    {
        cout<<"Data is there\n";
    }
    else
    {
        cout<<"Data is not there\n";
    }
    return 0;
}