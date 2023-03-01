//A3 Q.5
// Input 2395   1018   9440  96672
//Output 3       3      3      1
//count frequency of digit less than 6 
#include<stdio.h>
int Count(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter a number\n");
    scanf("%d",&iNo);
    iRet=Count(iNo);
    printf(" frequency of digit less than 6  :%d\n",iRet);
    return 0;
}
int Count(int iValue)
{
    int iDigit=0;
    int iCnt=0;
    {
        if(iValue<0)
        {
            iValue=-iValue;
        }
    }
    while(iValue>0)
    {
     iDigit=iValue%10;

        if(iDigit<6)
        {
            iCnt++;
        }
        iValue=iValue/10;
    }
    return iCnt;
}