////////////////////////////////////////////////
////////////Generic DSA//////////////////////////////
///////////////////////////////////////
///////SINGLY LL///////////////////////
#include<iostream>
using namespace std;

template <typename T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class SinglyLL
{
private:
    node <T>* first;
    int size;
    
public:
    SinglyLL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T , int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

template <class T>
 SinglyLL<T>::SinglyLL()
   {
       first = NULL;
       size = 0;
   }
   
    template <class T>
   void SinglyLL<T>::InsertFirst(T no)
   {
        node <T> * newn = new node<T>;  // newn = (PNODE)malloc(sizeof(NODE))
       
       newn->data = no;
       newn->next = NULL;
       
       if(first == NULL)
       {
           first = newn;
       }
       else
       {
           newn->next = first;
           first = newn;
       }
       size++;
   }
   
    template <class T>
   void SinglyLL<T>::InsertLast(T no)
   {
        node <T>* newn = new node<T>;  // newn = (PNODE)malloc(sizeof(NODE))
       
       newn->data = no;
       newn->next = NULL;
       
       if(first == NULL)
       {
           first = newn;
       }
       else
       {
            node <T>* temp = first;
           
           while(temp->next != NULL)
           {
               temp = temp->next;
           }
           temp->next = newn;
       }
       size++;
   }
   
    template <class T>
   void SinglyLL<T>::InsertAtPos(T no, int ipos)
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
        node <T>* temp=first;
        node <T>* newn=new node <T>;

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
   
    template <class T>
   void SinglyLL<T>::DeleteFirst()
   {
        node <T> * temp = first;
       
       if(first != NULL)
       {
           first = first->next;
           delete temp;
           
           size--;
       }
   }

    template <class T>
   void SinglyLL<T>::DeleteLast()
   {
        node <T>* temp = first;
       
       if(first == NULL)
       {
           return;
       }
       else if(first->next == NULL)
       {
           delete first;
           first = NULL;
           size--;
       }
       else
       {
           while(temp->next->next != NULL)
           {
               temp = temp->next;
           }
           
           delete temp->next;
           temp->next = NULL;
           size--;
       }
   }
   
    template <class T>
   void SinglyLL<T>::DeleteAtPos(int ipos)
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
       node <T>* temp=first;
       node <T>* targated=NULL;

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
   
    template <class T>
   void SinglyLL<T>::Display()
   {
        node <T>* temp = first;
       
       while(temp!= NULL)
       {
           cout<<temp->data<<"\t";
           temp = temp->next;
       }
       cout<<"\n";
   }
   
    template <class T>
   int SinglyLL<T>::Count()
   {
       return size;
   }

///////////////////////////////////////////////////////////////////////////////////
//generic doubly LL
//doubly ll

template <class T>
class DoublyLL
{
private:
    node <T>* first;
    node <T>* last;
    int size;

public:
    DoublyLL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

template <class T>
DoublyLL<T>::DoublyLL()
{
    first=NULL;
    last=NULL;
    size=0;
}

template <class T>
void DoublyLL<T>::InsertFirst(T no)
{
   node <T>* newn=new node <T>;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        newn->next=first;
        first->prev=newn;
        first=newn;
    }
    size++;
}

template <class T>
void DoublyLL<T>::InsertLast(T no)
{
    node <T>* newn=new node <T>;
    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        node <T>* temp=first;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;    
    }
    size++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T no,int ipos)
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
        node <T>* temp=first;
        node <T>* newn=new node <T>;

        newn->data=no;
        newn->next=NULL;
        newn->prev=NULL;

        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        newn->prev=temp;
        temp->next=newn;
        size++;
    }
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    node <T>* temp=first;

    if(first==NULL)
    {
        return;
    }
    else if (first->next==NULL)
    {
        delete first;
        first=NULL;
    }
    else
    {
        first=first->next;
        delete first->prev;
        first->prev=NULL;

        size--;
    }
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    if(first==NULL)
    {
        return;
    }
    else if(first->next==NULL)
    {
        delete first;
        first=NULL;
        last=NULL;
    }
    else
    {
        node <T>* temp=first;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;
        delete temp;
    }
    size--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int ipos)
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
        node <T>* temp=first;

        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        size--;
    }
}

template <class T>
void DoublyLL<T>::Display()
{
   node <T>* temp=first;

    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|\t";
        temp=temp->next;
    }
    cout<<"\n";
}

template <class T>
int DoublyLL<T>::Count()
{
    return size;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Generic singly circular linked list


template <class T>
class SinglyCL
{
    private:
        node<T>* first;
        node<T>* last;
        int size;
    
    public:
        SinglyCL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T , int);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        void Display();
        int Count();
};
    template <class T>
    SinglyCL<T>::SinglyCL()
        {
            first=NULL;
            last=NULL;
            size=0;
        }
    
    template <class T>
    void SinglyCL<T>::InsertFirst(T no)
    {
        node <T>*  newn=new node <T>;
        newn->data=no;
        newn->next=NULL;

        if((first==NULL)&&(last==NULL))
        {
            first=newn;
            last=newn;
        }
        else
        {
            newn->next=first;
            first=newn;
        }

        last->next=first;
        size++;
    }


     template <class T>
    void SinglyCL<T>:: InsertLast(T no)
    {
        
        node <T>* newn=new node<T>;
        newn->data=no;
        newn->next=NULL;

        if((first==NULL)&&(last==NULL))
        {
            first=newn;
            last=newn;
        }
        else
        {
          last->next=newn;
          last=newn;
        }

        last->next=first;
        size++;
    }

    template <class T>
    int SinglyCL<T>::Count()
    {
        return size;
    }

    template <class T>
    void SinglyCL<T>::InsertAtPos(T no,int ipos)
    {
        if((ipos<1)||(ipos>(size+1))) //Invalid position
        {
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
            node <T>* newn=new node <T>;
            newn->data=no;
            newn->next=NULL;

            node <T>* temp=first;

            for(int i=1;i<ipos-1;i++)
            {
                temp=temp->next;
            }
            newn->next=temp->next;
            temp->next=newn;

            size++;
        }
    }

     template <class T>
    void SinglyCL<T>::DeleteFirst()
    {
        if((first==NULL)&&(last==NULL))
        {
            return;
        }
        else if(first==last)
        {
            delete first;
            first=NULL;
            last=NULL;
        }
        else
        {
            first=first->next;
            delete last->next;
            last->next=first;   
        }
        size--;
    }

    template <class T>
    void SinglyCL<T>::DeleteLast()
    {
       node <T>*  temp=first;

         if((first==NULL)&&(last==NULL))
        {
            return;
        }
        else if(first==last)
        {
            delete first;
            first=NULL;
            last=NULL;
        }
        else
        {
            while(temp->next!=last)
            {
                temp=temp->next;
            } 

            delete last;
            last=temp;

            last->next=first;   
        }
        size--;
    }

    template <class T>
    void SinglyCL<T>::DeleteAtPos(int ipos)
    {
        if((ipos<1)||(ipos>size))
        {
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
            node <T>* temp=first;
            for(int i=1;i<ipos-1;i++)
            {
                temp=temp->next;
            }
            node <T>* targeted=temp->next;
            temp->next=targeted->next;
            delete targeted;

            size--;
        }
    }

     template <class T>
    void SinglyCL<T>::Display()
    {
        node <T>*  temp=first;

        if((first==NULL)&&(last==NULL))
        {
            return;
        }
        do
        {
            cout<<"|"<<temp->data<<"|->";
            temp=temp->next;
        } while (temp!=last->next);

        cout<<"\n";
    }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//generic doubly circular LL

template<class T>
class DoublyCL
{
    private:
         node <T>* first;
         node <T>* last;
         int  size;

    public:
    DoublyCL();    
    void Display();
    int Count();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
 DoublyCL<T>::DoublyCL()
         {
             first=NULL;
             last=NULL;
             size=0;
         }

template <class T>
void DoublyCL<T>:: InsertFirst(T no)
{
    node <T>* newn=new node<T>;

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((first==NULL)&&(last==NULL))
    {
        first=newn;
        last=newn;
    }
    else
    {
        newn->next=first;
        first->prev=newn;
        first=newn;
    }
    last->next=first;
    first->prev=last;
    size++;
}

template<class T>
void DoublyCL<T>:: InsertLast(T no)
{
     node <T>* newn=new node<T>;

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;

    if((first==NULL)&&(last==NULL))
    {
        first=newn;
        last=newn;
    }
    else
    {
        last->next=newn;
        newn->prev=last;
        last=newn;
    }
    last->next=first;
    first->prev=last;
    size++;
}

template <class T>
void DoublyCL<T>::Display()
{
    node <T> * temp=first;
    
    for(int i=1;i<=size;i++)
    {
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"\n";
}

template <class T>
int DoublyCL<T>::Count()
{
    return size;
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if((first==NULL)&&(last==NULL))
    {
        return;
    }
    else if(first==last)
    {
        delete first;
        first=NULL;
        last=NULL;
    }
    else
    {
        first=first->next;
        delete last->next;
        first->prev=last;
        last->next=first;
    }
    size--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if((first==NULL)&&(last==NULL))
    {
        return;
    }
    else if(first==last)
    {
        delete first;
        first=NULL;
        last=NULL;
    }
    else
    {
        last=last->prev;
        delete last->next;
        first->prev=last;
        last->next=first;
    }
    size--;
}
    template <class T>
    void DoublyCL<T>::InsertAtPos(T no,int ipos)
    {
        if((ipos<1)||(ipos>size+1))
        {
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
             node <T> * newn=new node<T>;

            newn->data=no;
            newn->next=NULL;
            newn->prev=NULL;

            node<T>* temp=first;

            for(int i=1;i<ipos-1;i++)
            {
                temp=temp->next;
            }
            newn->next=temp->next;
            newn->next->prev=newn;
            temp->next=newn;
            newn->prev=temp;
            size++;
        }
    }

template <class T>
void DoublyCL<T>::DeleteAtPos(int ipos)
{
    if((ipos<1)||(ipos>size))
    {
        return;
    }
    if(ipos==1)
    {
        DeleteFirst();
    }
    else if (ipos==size)
    {
        DeleteLast();
    }
    else
    {
       node <T> * temp=first;

        for(int i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;

        size--;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



        template <class T>
class Queue     
{
private:
    node <T>* first;
    int size;
    
public:
    Queue();
    void Enqueue(T);
    int Dequeue();
    void Display();
    int Count();    
};

template <class T>
Queue<T>::Queue()
{
    first = NULL;
    size = 0;
}
    
template <class T>
void Queue<T>::Enqueue(T no)  
{
    node <T>* newn =new node <T>;
    newn->data = no;
    newn -> next = NULL;
        
    if(size == 0)   
    {
        first = newn;
    }
    else
    {
        node <T>* temp = first;
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
    size++;
}
    
template <class T>
int Queue<T>::Dequeue()   
{
    int no = 0;
    node <T>* temp = first;
           
    if(size == 0)
    {
        cout<<"Queue is empty\n";
        return -1;
    }
            
        if(size == 1)
    {
        no = first->data;
        delete first;
        first = NULL;
    }
    else
    {
        no = first->data;
        first = first -> next;
        delete temp;
    }
           
    size--;
    return no;
}
    
template <class T>
void Queue<T>::Display()
{
    node <T>* temp = first;
    for(int i = 1 ; i <= size; i++, temp = temp->next)
    {
        cout<<"|"<<temp->data<<"|\t";
    }
    cout<<"\n";
}
    
template <class T>
int Queue<T>::Count()
{
    return size;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                              //
//                                 ENTRY FUNCTION                                                                                               //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iret = 0;

    SinglyLL <char>cobj;
    
    
    cobj.InsertFirst('A');
    cobj.InsertFirst('B');
    cobj.InsertFirst('C');
    
    cobj.InsertLast('D');
    cobj.InsertLast('E');
    
    cobj.Display();
    
    iret = cobj.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
    
    /////////////////////////////////////////
    
    SinglyLL <int>iobj1;
     
     int iret1=0;
     iobj1.InsertFirst(11);
     iobj1.InsertFirst(21);
     iobj1.InsertFirst(51);
     
     iobj1.InsertLast(101);
     iobj1.InsertLast(111);
     
     iobj1.Display();
     
     iret1= iobj1.Count();
     cout<<"Number of elemensts are : "<<iret1<<"\n";

     ///////////////////////////////////////////////////

     int iret2=0;
    DoublyLL <int>iobj2;

     iobj2.InsertFirst(11);
     iobj2.InsertFirst(21);
     iobj2.InsertFirst(51);
     
     iobj2.InsertLast(101);
     iobj2.InsertLast(111);
     
     iobj2.Display();
     
     iret2 = iobj2.Count();
     cout<<"Number of elemensts are : "<<iret2<<"\n";

     ///////////////////////////////////////////////////////////

      int iret3=0;
    SinglyCL<int>iobj3;

    iobj3.InsertFirst(51);
    iobj3.InsertFirst(21);
    iobj3.InsertFirst(11);

    iobj3.InsertLast(101);
    
    iobj3.InsertAtPos(55,4);

    iobj3.Display();
    iret3=iobj3.Count();
    cout<<"Number of elements are:"<<iret3<<"\n";

    iobj3.DeleteAtPos(4);
    iobj3.DeleteFirst();
    iobj3.DeleteLast();

      
    iobj3.Display();
    iret3=iobj3.Count();
    cout<<"Number of elements are:"<<iret3<<"\n";

    ///////////////////////////////////////////////////////////////////////

     int iret4=0;
     DoublyCL<int> iobj4;

    iobj4.InsertFirst(21);
    iobj4.InsertFirst(11);

    iobj4.InsertLast(51);
    iobj4.InsertLast(101);

    iobj4.InsertAtPos(75,3);
    iobj4.Display();

    iret4=iobj4.Count();

    cout<<"Number of elements are:"<<iret4<<"\n";

    iobj4.DeleteAtPos(3);
    iobj4.DeleteFirst();
    iobj4.DeleteLast();

    iobj4.Display();


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

     Stack <int>sobj;

    sobj.push(11);
    sobj.push(21);
    sobj.push(51);
    sobj.push(101);

    cout<<"Elements of stack\n";
    sobj.Display();
    
    int iret5=sobj.pop();            
    cout<<"Poped element is:"<<iret<<"\n";  

    cout<<"Elements of stack\n";
    sobj.Display();        
    iret=sobj.Count();

    cout<<"Size of Stack is:"<<iret5<<"\n"; 


    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    Queue <int>qobj;
    
    qobj.Enqueue(11);
    qobj.Enqueue(21);
    qobj.Enqueue(51);
    qobj.Enqueue(101);
    
    cout<<"Elements of Queue :\n";
    
    qobj.Display();
    int iret6 = qobj.Dequeue();      
    cout<<"Removed element from queue"<<iret6<<"\n";                    
    
    cout<<"Elements from queue : \n";
    qobj.Display();          
    iret6 = qobj.Count();     
    
    cout<<"Size of queue is : "<<iret6<<"\n";

    return 0;

}