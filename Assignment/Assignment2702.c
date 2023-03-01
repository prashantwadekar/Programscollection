//Assignment 27
//Q.2
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask=0x00020010;
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
        printf("5th and 18th bits are ON\n");
    }
    else
    {
        printf("Bits are OFF\n");
    }
    return 0;
}