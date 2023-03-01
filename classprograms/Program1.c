#include<stdio.h>
void Display(int);
int main()
{
    int iNo=1;
    printf("Enter number");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}
void Display(int ivalue)
{
    if((ivalue%2)==0)
    {
        printf("number is %d even\n",ivalue);
    }
    else
    {
        printf("Number is not even");
    }
}