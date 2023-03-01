// on all bits in given range
#include<iostream>
typedef unsigned int UINT;

using namespace std;

UINT ToggleRange(int iNo,int iStart,int iEnd)
{
    UINT iMask=0;
    int iResult=0;

    iMask=(0xFFFFFFFF<<(iStart-1))&(0xFFFFFFFF>>(32-iEnd));

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