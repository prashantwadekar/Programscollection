//swap first and last byte swap
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT SwapByte(UINT iNo)
{
    return ( iNo & 0x00FFFF00 )| iNo<<24 |iNo>>24;
    
}
int main()
{
    UINT iValue=0,iRet=0,i,j;

    cout<<"Enter number";
    cin>>iValue;

    iRet=SwapByte(iValue);
    cout<<"Data is :"<<iRet<<'\n';
    return 0;
}