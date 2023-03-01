//without using flag in tree
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
        if(Head==NULL)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int Count(PNODE Head)
{
    static int iCnt=0;

    if(Head!=NULL)
    {
        iCnt++;
        Count(Head->lchild);
        Count(Head->rchild);
    }
    return iCnt;
}

int CountLeaf(PNODE Head)
{
    static int iCnt=0;

    if(Head!=NULL)
    {
       if((Head->lchild==NULL)&&(Head->rchild==NULL))
       {
           iCnt++;
       }
        CountLeaf(Head->lchild);
        CountLeaf(Head->rchild);
    }
    return iCnt;
}

int CountParent(PNODE Head)
{
    static int iCnt=0;

    if(Head!=NULL)
    {
       if((Head->lchild!=NULL)||(Head->rchild!=NULL))
       {
           iCnt++;
       }
        CountParent(Head->lchild);
        CountParent(Head->rchild);
    }
    return iCnt;
}

void Inorder(PNODE Head)
{
    if(Head!=NULL)
    {
        Inorder(Head->lchild);
        cout<<Head->data<<"\n";
        Inorder(Head->rchild);
    }
}

void Postorder(PNODE Head)
{
    if(Head!=NULL)
    {
        Postorder(Head->lchild);
        cout<<Head->rchild<<"\n";
        Postorder(Head->rchild);
    }
}

void Preorder(PNODE Head)
{
    if(Head!=NULL)
    {
        Preorder(Head->lchild);
        cout<<Head->lchild<<"\n";
        Preorder(Head->rchild);
    }
}
int main()
{
    int  no=0,iret=0;
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

    iret=Count(first);
    cout<<"Number of nodes are: "<<iret<<"\n";

    iret=CountLeaf(first);
    cout<<"Number of leaf nodes are: "<<iret<<"\n";

    iret=CountParent(first);
    cout<<"Number of leaf nodes are: "<<iret<<"\n";

    cout<<"Inorder\n";
    Inorder(first);

    cout<<"Postorder\n";
    Postorder(first);

    cout<<"Preorder\n";
    Preorder(first);
    
    return 0;
}