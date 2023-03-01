#include<iostream>
using namespace std;
int FactorialI(int iNo)
{
    int iFact=1;

    while(iNo!=0)
    {
        iFact=iFact*iNo;
        iNo--;
    }
    return iFact;
}
int FactorialR(int iNo)
{
   static int iFact=1;

    if(iNo!=0)
    {
        iFact=iFact*iNo;
        iNo--;
        FactorialR(iNo);
    }
    return iFact;
}


int main()
{
    int iValue=0;
    int iret=0;

    cout<<"Enter number:\n";
    cin>>iValue;

   // iret=FactorialI(iValue);

   iret=FactorialR(iValue);

    cout<<"Factorail is  :"<<iret<<"\n";

    return 0;
}