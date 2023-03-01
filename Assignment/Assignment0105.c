//Assignment 1
//Q.5 Accept number from user and print that number * on screen
#include<stdio.h>
void Accept(int);
int main()
{
    int iValue=0;
    iValue=5;
    Accept(iValue);
    return 0;
}
void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\n");
    }
}