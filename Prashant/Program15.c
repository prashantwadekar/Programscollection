//Display Factors
#include<stdio.h>
void DisplayFactors(int);
int main()
{
    int iNo=0;
    printf("Enter a number\n");
    scanf("%d",&iNo);
    DisplayFactors(iNo);
    return 0;
}
void DisplayFactors(int ivalue)
{
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
    int icnt=0;
    for(icnt=1;icnt<ivalue;icnt++)
    {
        if((ivalue%icnt)==0)
        {
            printf("%d\n",icnt);
        }
    }
}