//Input           5  
//Counter     1  2 3  4  5
//Output       2 4 6 8 10
#include<stdio.h>
void Display(int);
int main()
{
    int iValue=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d \n",iCnt*2);
    }
}