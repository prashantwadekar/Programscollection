//queue
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class Queue
{
    private:
          PNODE first;
          int size;
    
    public:
       Queue()
       {
           first=NULL;
           size=0;
       }
       void enqueue(int no)  //InsertLast() singlyLL()
       {
             PNODE newn =new NODE;

            newn->data=no;
            newn->next=NULL;

            if(size==0)
            {
                first=newn;
            }
            else
            {
                PNODE temp=first;

                while(temp->next!=NULL)
                {
                    temp->next=newn;
                }
                temp->next=newn;
            }
            size++;
       }
        int dequeue() //DeleteFirst()
       {
           int no=0;
           PNODE temp=first;

           if(size==0)
           {
               cout<<"queue is empty\n";
                return -1;
           }

            if(size==1)
            {
                no=first->data;
                delete first;
                first=NULL;
            }
            else
            {
                no=first->data;
                first=first->next;
                delete temp;
            }
            size--;
            return no;
       }
        void Display()
        {
            PNODE temp=first;

            for(int i=1;i<=size;i++)
            {
                cout<<"|"<<temp->data<<"|->";
                temp=temp->next;
            }
            cout<<"\n";
        }

        int Count()
        {
            return size;
        }
};
int main()
{
    Queue obj;

    obj.enqueue(11);
    obj.enqueue(21);
    obj.enqueue(51);
    obj.enqueue(101);

    cout<<"Elements of stack\n";
    obj.Display();
    
    int iret=obj.dequeue();         //101
    cout<<"Poped element is:"<<iret<<"\n";  //101

    cout<<"Elements of queue\n";
    obj.Display();        //51 21 11
    iret=obj.Count();

    cout<<"Size of queue is:"<<iret<<"\n"; //3

    return 0;

}