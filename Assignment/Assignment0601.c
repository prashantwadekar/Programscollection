//A3 Q.1
// Input 2395   1018   -1018  8462
//Output 1       2      2      4
//count of even digits 
#include<stdio.h>
int CountEven(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter a number\n");
    scanf("%d",&iNo);
    iRet=CountEven(iNo);
    printf(" count of even digits are :%d\n",iRet);
    return 0;
}
int CountEven(int iValue)
{
    int iDigit=0;
    int iCnt=0;
    {
        if(iValue==0)
        {
            return 1; //Filter
        }
    }
    {
        if(iValue<0)
        {
            iValue=-iValue; //Updator
        }
    }
    while(iValue>0) //O(N) where N is number of digits (N>=0)
    {
     iDigit=iValue%10;
     if((iDigit%2)==0)
        {
            iCnt++;
        }
        iValue=iValue/10;
    }
    return iCnt;
}