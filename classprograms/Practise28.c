#include<stdio.h>
typedef = UNIT unsigned long int;
UINT Factorial(int);
int main()
{
    int iNo=0;
    UINT iRet=0;
    printf("Enter a number:\n");
    scanf("%d",&iNo);
    printf("Factorial is:%d\n",iRet);
    return 0;
}
UINT Factorial(int ivalue)
{
    UINT iFact =1;
    int iCnt=0;
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
    iCnt=1;
    while(iCnt<=ivalue)
    {
        iFact=iFact*iCnt;
        iCnt++;
    }
    return iFact;
}