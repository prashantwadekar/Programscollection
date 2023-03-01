//Generic programing
#include<iostream>
using namespace std;

void Swap(int *p,int *q)     //(100,200)
{
    int temp;

    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int x=0,y=0;

    cout<<"Enter first Number\n";
    cin>>x;

    cout<<"Enter second number\n";
    cin>>y;

    Swap(&x,&y);      //Swap(100,200)

    cout<<"Value of X becomes:"<<x<<"\n";
    cout<<"Value of Y becomes:"<<y<<"\n";

    return 0;
}