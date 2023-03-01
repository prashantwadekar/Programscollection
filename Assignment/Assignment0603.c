//A3 Q.3
// Input 2395   1018   4521  9922
//Output  1      0      2      0
//count of digits in between 3 and 7 
#include<stdio.h>
int CountRange(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter a number\n");
    scanf("%d",&iNo);
    iRet=CountRange(iNo);
    printf("count of digits in between 3 and 7  are :%d\n",iRet);
    return 0;
}
int CountRange(int iValue)
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

        if(iDigit>3 && iDigit<7)
        {
            iCnt++;
        }
        iValue=iValue/10;
    }
    return iCnt;
}