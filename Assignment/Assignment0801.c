//Assignment 8
//Q.1)Write a program which  Accept range from user and display all numbers between that range
//Input: -10 2                                          10  10         90  18                2   10
//output: -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2            10         Invalid Range         2 3 4 5 6 7 8 9 10 
#include<stdio.h>
void RangeDisplay(int,int);
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter start Point\n");
    scanf("%d",&iValue1);
    printf("Enter end Point\n");
    scanf("%d",&iValue2);
    RangeDisplay(iValue1,iValue2);
    return 0;
}
void RangeDisplay(int iStart,int iEnd)
{
    int iCnt=0;
    if(iStart<0 && iEnd<0)
    {
        iStart=-iStart;
        iEnd=-iEnd;
    }
    if(iStart>iEnd)
    {
        printf("Invalid Range\n");
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}