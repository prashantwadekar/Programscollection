//input 5
//output 5 4 3 2 1
#include<stdio.h>
void Display(int);
int main()
{
    int iNo=0;
    printf("Enter a number\n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}
void Display(int ivalue)
{
    int i=0;
    for(i=ivalue;i>0;i--)
    {
     printf("%d\n",i);
    }
}