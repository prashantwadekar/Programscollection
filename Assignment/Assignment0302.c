//assignment 3
//q 2
//write a program which accept number from user and print even factors of that screen
//input 24
//output 2 4 6 8 12
#include<stdio.h>
void DisplayEvenFact(int);
int main()
{
    int iNo=0;
    printf("Enter a number:");
    scanf("%d",&iNo);
    DisplayEvenFact(iNo);
    return 0;
}
void DisplayEvenFact(int iValue)
{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<iValue;iCnt++)
    {
        if((iValue%iCnt)==0)
        {
            if((iCnt%2)==0)
            {
            printf("%d \n",iCnt);
            }
         }
    }
}