//Assignment 8
//Q.5)Write a program which  Accept range from user and display all numbers in  between that range in reverse order
//Input   23     35
//output  35      34      33      32      31      30      29      28      27      26      25      24      23    70      
//Input   -10    2
//output   2       1       0       -1      -2      -3      -4      -5      -6      -7      -8      -9      -10
//90 18 Invalid Range
//10 10  10
#include<stdio.h>
void RangeDisplayRev(int,int);
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter start point\n");
    scanf("%d",&iValue1);
    printf("Enter end point\n");
    scanf("%d",&iValue2);
    RangeDisplayRev(iValue1,iValue2);
    return 0;
}
void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt=0;
    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    if(iStart<0 && iEnd<0)
    {
        printf("Invalid Range");
    }
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }

}