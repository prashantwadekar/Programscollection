//input 5
//output 120
#include<stdio.h>
int DisplayFact(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter a number:\n");
    scanf("%d",&iNo);
    iRet=DisplayFact(iNo);
    printf(" Factorial is %d\n",iRet);
    return 0;
}
int DisplayFact(int ivalue)
{
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
    int iCnt=0;
    int iFact=1;
    for(iCnt=1;iCnt<=ivalue;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
}