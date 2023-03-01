//Assignment 8
//Q.2)Write a program which  Accept range from user and display all even numbers between that range
//Input         23  35                     10 18              10   10                    -10   2
//output  24  26   28  30  32  34    10  12  14  16  18          10             -10  -8  -6  -4  -2  0  2
#include<stdio.h>
void DisplayRange(int,int);
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter a start point\n");
    scanf("%d",&iValue1);
    printf("Enter a end point\n");
    scanf("%d",&iValue2);
    DisplayRange(iValue1,iValue2);
    return 0;
}
void DisplayRange(int iStart,int iEnd)
{
    int iCnt=0;
    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
    if(iStart<0 && iEnd<0)
    {
        iStart=-iStart;
        iEnd=-iEnd;
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("%d\n",iCnt);
        }
    }
}