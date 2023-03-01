//125 8
#include<stdio.h>
int Display(int);
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    iRet=Display(iValue);
    printf("Addition of Digits is:%d\n",iRet);
    return 0;
}
int Display(int iNo)
{
    int iDigit=0;
    int iSum=0;
    while(iNo>0)
    {
    iDigit=iNo%10;
    iSum=iSum+iDigit;
    iNo=iNo/10;
    }
    return iSum;
}