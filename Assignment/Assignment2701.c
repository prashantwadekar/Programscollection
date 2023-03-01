//Assignment 27
//Q.1
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    int iResult=0;
    UINT iMask=0x00004000;              //0000 0000  0000 0000  0100 0000  0000 0000
    iResult=iNo & iMask;
    if(iResult==iMask)
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
    scanf("%c",&iValue);

    bRet=CheckBit(iValue);
    if(bRet==true)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15 th bit is OFF\n");
    }
    return 0;
}
