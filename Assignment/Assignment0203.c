//Assignment 2
//Q.3 Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo"
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
    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}