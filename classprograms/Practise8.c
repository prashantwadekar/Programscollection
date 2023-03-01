//Accept two numbers from user and display first number in second number of times
#include<stdio.h>
int Display(int iNo,int Frequency)
{
 int icnt=0;
 for(icnt=0;icnt<Frequency;icnt++)
{
    printf("%d",iNo);
}
}
int main()
{
    int ivalue=0;
    int icount=0;
    printf("Enter number:\n");
    scanf("%d",&ivalue);
    printf("Enter frequency:\n");
    scanf("%d",&icount);
   Display(ivalue,icount);
    return 0;
}