// Range(5 16)   Number-240 output-65280
//toggle bit in given range
#include<iostream>
 unsigned int UINT;

using namespace std;

UINT ToggleRange(int iNo,int iStart,int iEnd)
{
    UINT iMask1=0xFFFFFFFF;
    UINT iMask2=0xFFFFFFFF;
    UINT iMask=0;
    int iResult=0;

    iMask1=iMask1<<(iStart-1);
    iMask2=iMask2>>(32-iEnd);
    iMask=iMask1 & iMask2;
    iResult=iNo ^ iMask;

    return iResult;
}
int main()
{
    UINT iValue=0,iRet=0,i=0,j=0;

    cout<<"Enter Number:\n";
    cin>>iValue;
    cout<<"Enter starting position\n";
    cin>>i;

    cout<<"Enter ending position\n";
    cin>>j;

    iRet=ToggleRange(iValue,i,j);

    cout<<"Updated Number is:"<<iRet<<"\n";

    return 0;
}