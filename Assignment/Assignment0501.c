//A3.Q1
//write a program which accept number from user and display its digits in reverse manner
//Input 2395
//output 5 9 3 5 
#include<stdio.h>
int Reverse(int);
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter a value:\n");
    scanf("%d",&iValue);
    iRet=Reverse(iValue);
    printf("Reverse is:%d\n",iRet);
    return 0;
}
int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    return iRev;
}
