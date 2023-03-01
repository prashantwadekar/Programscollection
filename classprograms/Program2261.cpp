#include<iostream>
using namespace std;

template <typename T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Stack
   {
        private:
           node <T>* first;
           int size;
    
        public:
            Stack();
            void push(T no);
            int pop();
            void Display();
            int Count();

    };
    template<class T>
    Stack<T>::Stack()
       {
            first=NULL;
           size=0;
       }

       template<class T>
       void Stack<T>::push(T no)  //InsertFirst() singlyLL()
       {
             node<T>* newn =new node<T>;

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

       template<class T>
        int Stack<T>::pop() //Deletefirst()
       {
           int no=0;
           node<T>* temp=first;

           if(size==0)
           {
               cout<<"Stack is empty\n";
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
        void Stack<T>::Display()
       {
            node<T>* temp=first;

            while(temp!=NULL)
            {
                cout<<"|"<<temp->data<<"|"<<"\n";
                temp=temp->next;
            }
            cout<<"\n";
        }

        template<class T>
        int Stack<T>::Count()
        {
            return size;
        }
int main()
{
    Stack <int>obj;

    obj.push(11);
    obj.push(21);
    obj.push(51);
    obj.push(101);

    cout<<"Elements of stack\n";
    obj.Display();
    
    int iret=obj.pop();            //101
    cout<<"Poped element is:"<<iret<<"\n";  //101

    cout<<"Elements of stack\n";
    obj.Display();        //51 21 11
    iret=obj.Count();

    cout<<"Size of Stack is:"<<iret<<"\n"; //3

    return 0;

}