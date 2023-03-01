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
void Display(int iValue)
{
    int i=0;

    if(iValue<0)  //Input updator
    {
        iValue=-iValue; 
    }
    if(iValue==0) //Filter
    {
        printf("You entered number is 0\n");
        return;
    }
    for(i=1;i<=iValue;i++)
    {
        printf("%d\n",i);
    }

}