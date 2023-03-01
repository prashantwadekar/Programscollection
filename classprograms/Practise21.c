//input 3
//output 1  2  3
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
    for(i=1;i<=iValue;i++)
    {
        printf("%d\n",i);
    }

}