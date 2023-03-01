#include<iostream>
using namespace std;
int SumI(int Arr[],int iSize)
{
    int iSum=0,i=0;

    for(i=0;i<iSize;i++)
    {
        iSum=iSum+Arr[i];
    }
return iSum;
}
int main()
{
    int iLength=0,i=0,iret=0;
    int *p=NULL;

    cout<<"enter number of elements\n";
    cin>>iLength;

    p=new int[iLength];

    cout<<"enter the elements\n";

    for(i=0;i<iLength;i++)
    {
        cin>>p[i];
    }
    iret=SumI(p,iLength);
    cout<<"Addition is:\n"<<iret;

    delete []p;

    return 0;
}