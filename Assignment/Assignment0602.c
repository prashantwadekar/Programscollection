//A3 Q.2
// Input 2395   1018   -1018  8462
//Output 3      2       2      0
//count of Odd digits 
#include<stdio.h>
int CountOdd(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter a number\n");
    scanf("%d",&iNo);
    iRet=CountOdd(iNo);
    printf(" count of Odd digits are :%d\n",iRet);
    return 0;
}
int CountOdd(int iValue)
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

        if(iDigit%2 !=0)
        {
            iCnt++;
        }
        iValue=iValue/10;
    }
    return iCnt;
}