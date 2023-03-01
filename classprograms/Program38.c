#include<stdio.h>
int Reverse(int);
int main()
{
    int iValue,iRet=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    iRet=Reverse(iValue);
    printf("Reverse Number is:%d\n",iRet);
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