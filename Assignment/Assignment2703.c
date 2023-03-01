//Assignment 27
//Q.3
//7,12,15,28
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask=0x08004840;
    iResult=iNo & iMask;
    if(iResult=iMask)
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

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CheckBit(iValue);
    if(bRet==true)
    {
        printf("7th, 12th,15th,28th bits are ON\n");
    }
    else
    {
        printf("bits are OFF\n");
    }
    return 0;
}