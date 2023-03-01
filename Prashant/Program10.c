//input 3
//output 3 2 1
#include<stdio.h>
void Display(int);
int main()
{
    int iNo=0;
    printf("Enter a value:\n",iNo);
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}
void Display(int ivalue)
{
    int i=0;
    for(i=ivalue;i>=1;i--)
    {
        printf("%d\n",i);
    }

}