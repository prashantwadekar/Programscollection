//Assignment 28
//Q.1
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iResult=0;
    UINT iMask=0x00000040;
    iResult=iNo & iMask;   //0100 111
                           //0000 1111
  return iResult;
}
int main()
{
    int iValue=0;
    UINT iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=CheckBit(iValue);

    printf("%d",iRet);
  
    return 0;
}