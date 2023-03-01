//Assignment 1
//Q.3 Program to print 5 to 1 numbers on screen
#include<stdio.h>
void Display(void);
int main()
{
    Display();
    return 0;
}
void Display()
{
    int i=0;
    for(i=5;i>=1;i--)
    {
        printf("%d\n",i);
    }
}