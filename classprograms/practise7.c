//Accept one number from user and print that number of * on screeen
#include<stdio.h>
void Display(int iNo)
{
    int icnt=0;
    for(icnt=0;icnt<iNo;icnt++)
    {
        printf("*");
    }
}
int main()
{
    int ivalue=0;
    printf("Enter a number\n");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}