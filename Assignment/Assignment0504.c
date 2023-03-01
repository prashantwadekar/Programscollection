//A3 Q.4
// Input 2395   1018   9440  922432
//Output 0       0      2       1
//Frequency of 4 in number 
#include<stdio.h>
int CountFour(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter a number\n");
    scanf("%d",&iNo);
    iRet=CountFour(iNo);
    printf(" frequency of 4 in number counts are :%d\n",iRet);
    return 0;
}
int CountFour(int iValue)
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

        if(iDigit==4)
        {
            iCnt++;
        }
        iValue=iValue/10;
    }
    return iCnt;
}