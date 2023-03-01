#include<iostream>
using namespace std;
int SumI(int iValue)
{
    int isum=0;

    while(iValue!=0)
    {
        isum=isum+(iValue%10);
        iValue=iValue/10;
    }
    return isum;
}
int SumR(int iValue)
{
    static int isum=0;

    if(iValue!=0)
    {
        isum=isum+(iValue%10);
        iValue=iValue/10;
        SumR(iValue);
    }
    return isum;
}

int main()
{
    int iNo=0;
    int iret=0;

    cout<<"Enter number:\n";
    cin>>iNo;

    //iret=SumI(iNo);

    iret=SumR(iNo);

    cout<<"Summation of digits :"<<iret<<"\n";

    return 0;
}