//Assignment 2
//Q.4 Accept two numbers from user and print first number in second number of times
// Input  12  3
//Output  12 12 12
#include<stdio.h>
int Display(int,int);
int main()
{
    int iValue=0,iFrequency=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    printf("Enter a frequency:\n");
    scanf("%d",&iFrequency);
    Display(iValue,iFrequency);
    return 0;
}
int Display(int iNo,int iFreq)
{
    int iCnt=0;
    if(iFreq<0)
    {
        iFreq=-iFreq;
    }
    for(iCnt=1;iCnt<=iFreq;iCnt++)
    {
        printf("%d\n",iNo);
    }
}