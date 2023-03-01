//Assignment 27
//Q.4
//7 8 9 bit
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask=0x000001C0;
    iResult=iNo&iMask;
    if(iMask=iResult)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT iValue=0;
    bool bRet=false;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    bRet=CheckBit(iValue);
    if(bRet==true)
    {
        printf("7th 8th 9th bits are ON\n");
    }
    else
    {
        printf("Bits are OFF\n");
    }
    return 0;
}