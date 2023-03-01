#include<iostream>
using namespace std;
int SumI(int Arr[],int iSize)
{
    int iSum=0,i=0;

    while(i<iSize)
    {
        iSum=iSum+Arr[i];
        i++;
    }
return iSum;
}

int SumR(int Arr[],int iSize)
{
    static int iSum=0,i=0;

    if(i<iSize)
    {
        iSum=iSum+Arr[i];
        i++;
        SumR(Arr,iSize);
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
    //iret=SumI(p,iLength);
    iret=SumR(p,iLength);
    cout<<"Addition is:\n"<<iret;

    delete []p;

    return 0;
}