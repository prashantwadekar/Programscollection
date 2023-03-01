//Display byte //Byte slicing
//101 0 0 0
//2863311530 170
#include<iostream>
typedef unsigned int UINT;

using namespace std;

void DisplayByte(UINT iNo)
{
    UINT Byte1 =iNo & 0x000000FF;

    UINT Byte2 =iNo & 0x0000FF00;
    Byte2=Byte2>>8;

    UINT Byte2 =iNo & 0x00FF0000;
    Byte3=Byte2>>16;

    UINT Byte4 =iNo & 0xFF000000;
    Byte2=Byte2>>24;

    cout<<"Byte1"<<Byte1<<"\n";
}
int main()
{
    UINT iValue=0,iRet=0;

    cout<<"Enter Number:\n";
    cin>>iValue;
    
    iRet=DisplayByte(iValue);

    cout<<"Updated Number is:"<<iRet<<"\n";

    return 0;
}