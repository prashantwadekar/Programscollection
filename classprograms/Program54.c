//Maximum Number 10 2::10   4 29::29
#include<stdio.h>
int Maximize(int,int);
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter first number:\n");
    scanf("%d",&iValue1);
    printf("Enter second Number:\n");
    scanf("%d",&iValue2);
    iRet=Maximize(iValue1,iValue2);
    printf("Maximum Number is:%d",iRet);
    return 0;
}
int Maximize(int iNo1,int iNo2)
{
    int iResult=0;
    if(iNo1>iNo2)
    {
        iResult=iNo1;
    }
    else
    {
        iResult=iNo2;
    }
    return iResult;
}