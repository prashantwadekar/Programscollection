//number from user and toggle last four anf first four bits

#include<iostream>
typedef unsigned int UINT;

using namespace std;

UINT ToggleNibble(int iNo)
{
    int iMask=0xF000000F;
    int iResult=0;

    iResult=iNo ^ iMask;

    return iResult;
}
int main()
{
    UINT iValue=0,iRet=0;

    cout<<"Enter Number:\n";
    cin>>iValue;

    iRet=ToggleNibble(iValue);

    cout<<"Updated Number is:"<<iRet<<"\n";

    return 0;
}