#include<stdio.h>
int Average(int,int,int);
int main()
{
    int iValue1=0,iValue2=0,iValue3=0;
    float fResult=0.0;
    printf("Enter first number:\n");
    scanf("%d",&iValue1);
    printf("Enter Second Number:\n");
    scanf("%d",&iValue2);
    printf("Enter third Number:\n");
    scanf("%d",&iValue3);
    fResult=Average(iValue1,iValue2,iValue3);
    printf("Average is %f\n",fResult);
    return 0;
}
int Average(int iNo1,int iNo2,int iNo3)
{
    int iSum=0;
    float fRet=0.0;
    iSum=iNo1+iNo2+iNo3;
    fRet=iSum/3;
    return fRet;
}