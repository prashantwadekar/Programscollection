//A3 Q.3
// Input 2395   1018   90000  922432
//Output 1       0      0       3
//Frequency of 2 in number 
#include<stdio.h>
int CountTwo(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter a number\n");
    scanf("%d",&iNo);
    iRet=CountTwo(iNo);
    printf(" frequency of 2 in number counts are :%d\n",iRet);
    return 0;
}
int CountTwo(int iValue)
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

        if(iDigit==2)
        {
            iCnt++;
        }
        iValue=iValue/10;
    }
    return iCnt;
}