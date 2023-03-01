//input 3
//output 1 2 3
//input 0
//output Entered number is zero
//input -9
//output 1 2 3 4 5 6 7 8 9
#include<stdio.h>
void Display(int);
int main()
{
    int ivalue=0;
    printf("Enter a number\n");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}
void Display(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo; //input updator
    }
    if(iNo==0)
    {
        printf("Enterd number is Zero\n"); //Filter
        return;
    }
  for(i=1;i<=iNo;i++)
    {
        printf("%d\n",i);
    }
}