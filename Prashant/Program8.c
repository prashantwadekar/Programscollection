//Enter a value from user and print that number of times Marvellous on screen
#include<stdio.h>
void Display(int);
int main()
{
    int iNo=0;
    printf("Enter a number:\n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}
void Display(int ivalue)
{
    int i=0;
    for(i=1;i<=ivalue;i++)
    {
        printf("Marvellous\n",ivalue);
    }
}