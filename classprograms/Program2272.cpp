#include<iostream>
using namespace std;

template <typename T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Queue
{
    private:
          node <T>* first;
          int size;
    
    public:
       Queue();
       void enqueue(T no);
       int dequeue();
       void Display();
       int Count();
};
    template<class T>
    Queue<T>::Queue()
       {
           first=NULL;
           size=0;
       }
       template<class T>
       void Queue<T>::enqueue(T no)  //InsertLast() singlyLL()
       {
            node<T>* newn =new node<T>;

            newn->data=no;
            newn->next=NULL;

            if(size==0)
            {
                first=newn;
            }
            else
            {
                node<T>* temp=first;

                while(temp->next!=NULL)
                {
                    temp=temp->next;
                }
                temp->next=newn;
            }
            size++;
       }
       template<class T>
        int Queue<T>::dequeue() //DeleteFirst()
       {
           int no=0;
           node<T>* temp=first;

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

        template<class T>
        void Queue<T>::Display()
        {
            node<T>* temp=first;

            for(int i=1;i<=size;i++)
            {
                cout<<"|"<<temp->data<<"|->";
                temp=temp->next;
            }
            cout<<"\n";
        }
       template<class T>
        int Queue<T>::Count()
        {
            return size;
        }
int main()
{
    Queue <int>obj;

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