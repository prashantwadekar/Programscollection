//take two position from user and toggel two position
//11
//1 4
//Output 2
#include<iostream>

using namespace std;

typedef unsigned int UINT;

/*
op1  op2  &   |   ^
1    0    0   1   1
0    1    0   1   1
1    1    1   1   0
0    0    0   0   0
*/

//iNo   0000   0000  1110  0100  1111  0100  1011  1010
//ipos  5 6
//iRet  0000   0000  1110  0100  1111  0100  1001  1010


int ToggleBit(UINT iNo,int iPos1,int iPos2)
{
    int iMask1=0X00000001;
    int iMask2=0x00000001;
    int iMask=0;
    int iResult=0;

    iMask1=iMask1<<(iPos1-1);
    iMask2=iMask2<<(iPos2-1);

    iMask=iMask1 | iMask2;

    iResult=iNo^iMask;

    return iResult;
}
int main()
{
    int iValue=0,iRet=0,i=0,j=0;

    cout<<"Enter Number:\n";
    cin>>iValue;

    cout<<"Enter first position of bit:\n";
    cin>>i;

    cout<<"Enter second position of bit:\n";
    cin>>j;

    iRet=ToggleBit(iValue,i,j);

    cout<<"Updated Number is:"<<iRet<<"\n";

    return 0;
}