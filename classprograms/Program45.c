#include<stdio.h>
int Power(int,int);
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter First number:\n");
    scanf("%d",&iValue1);
    printf("Enter second number:\n");
    scanf("%d",&iValue2);
    iRet=Power(iValue1,iValue2);
    printf("Result is:%d",iRet);
    return 0;
}
int Power(int x,int y)
{
    int iMul=1,iCnt=0;
    if(x<0)
    {
        x=-x;
    }
    if(y<0)
    {
        y=-y;
    }
    for(iCnt=1;iCnt<=y;iCnt++)
    {
        iMul=iMul*x;
    }
    return iMul;
}