//assignment 3
//Q.1 write a program which accept one number from user and print that number of even number of even numbers on screen
//Input: 7
//output: 2 4 6 8 10 12 14
#include<stdio.h>
void PrintEven(int);
int main()
{
    int iNo=0;
    printf("Enter a number:\n");
    scanf("%d",&iNo);
    PrintEven(iNo);
    return 0;
}
void PrintEven(int iValue)
{
    int iCnt=0;
    if(iValue<=0)
    {
        return;
    }
 for(iCnt=1;iCnt<iValue;iCnt++)
 {
    if((iCnt%2)==0)
    {
        printf("%d\n",iCnt);
    }
 }
}