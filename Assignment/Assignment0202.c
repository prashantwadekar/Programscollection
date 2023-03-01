//Assignment 2
//Q.2 Accept one number from user and print that number * on screen
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
while(iNo>=1)
  {
    printf("*\n");
    iNo--;
  }
}