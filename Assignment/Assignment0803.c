//Assignment 8
//Q.3)Write a program which  Accept range from user and return addition of all numbers between that range(range should be positive numbers only)
//Input   23 30  10 18       -10 2           90 18
//output  212     126      Invalid range    Invalid range
#include<stdio.h>
int RangeSum(int,int);
int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;
    printf("Enter a start point\n");
    scanf("%d",&iValue1);
    printf("Enter a end point\n");
    scanf("%d",&iValue2);
    iRet=RangeSum(iValue1,iValue2);
    printf("Addition of all numbers between range is:%d\n",iRet);
    return 0;
}
int RangeSum(int iStart,int iEnd)
{
    int iCnt=0,iSum=0;
    if(iStart>iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }
    if(iStart<0 && iEnd<0 || iStart<0 || iEnd<0)
    {
        printf("Invalid range\n");
        return 0;
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;
}