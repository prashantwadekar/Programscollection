#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask=0x00000840;
    UINT iResult=0;
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

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CheckBit(iValue);

    if(bRet==true)
    {
        printf("7th and 12th bit is ON\n");
    }
    else
    {
        printf("bits are OFF\n");
    }

    return 0;
}