//Accept one number from use and print that number of * on screen
#include<stdio.h>
void Display(int iNo)
{
    while(iNo>0)
    {
        printf("*");
        iNo--;
    } 
}
int main()
{
    int ivalue=0;
    printf("Enter a number:\n");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}