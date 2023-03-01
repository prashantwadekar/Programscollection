//Enter 1 value from user and print factorial of that number 
//Input 5
//output 1*2*3*4*5=120
#include<stdio.h>
int DisplayFact(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter a number:\n");
    scanf("%d",&iNo);
    iRet=DisplayFact(iNo);
    printf("Factorial of entered number is:\n%d",iRet);
    return 0;
}
int DisplayFact(int ivalue)
{
    if(ivalue<0)
    {
        ivalue=-ivalue; //input Updator
    }
    int iCnt=1;
    int iFact=1;
    while(iCnt<=ivalue)
    {
        iFact=iFact*iCnt;
        iCnt++;
    }
    return iFact;
}