// Input 1 2 3  4
//Output 4
#include<stdio.h>
int DigitCount(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter a number\n");
    scanf("%d",&iNo);
    iRet=DigitCount(iNo);
    printf("Enetered number counts are :%d\n",iRet);
    return 0;
}
int DigitCount(int iValue)
{
    int iCnt=0;
    while(iValue>0)
    {
        iValue=iValue/10;
        iCnt++;
    }
    return iCnt;
}