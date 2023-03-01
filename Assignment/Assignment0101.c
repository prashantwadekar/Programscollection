//Assignment 1
//Q.1 Program to divide 2 numbers
#include<stdio.h>
int Divide(int,int);
int main()
{
    int iValue1=15,iValue2=5;
    int iRet=0;
    iRet=Divide(iValue1,iValue2);
    printf("Division is %d",iRet);
    return 0;
}
int Divide(int iNo1, int iNo2)
{
    int iAns=0;
    iAns=iNo1/iNo2;
    return iAns;
}
