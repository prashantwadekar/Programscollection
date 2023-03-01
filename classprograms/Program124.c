#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask=0x0000000F;
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
        printf("First 4 bits are ON\n");
    }
    else
    {
        printf("bits are OFF\n");
    }

    return 0;
}