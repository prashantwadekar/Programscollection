//Input 5
//output 120(5*4*3*2*1)
#include<stdio.h>
typedef unsigned long int UINT;
UINT DisplayFact(int);
int main()
{
    int iNo=0;
    UINT iRet=0;
    printf("Enter a value\n");
    scanf("%d",&iNo);
    iRet=DisplayFact(iNo);
    printf("Factorial is %ld",iRet);
    return 0;
}
UINT DisplayFact(int ivalue)
{
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
    int iCnt=0;
    UINT iFact=1;
    for(iCnt=1;iCnt<=ivalue;iCnt++)
    {
        iFact=iFact*iCnt;
    }
    return iFact;
}