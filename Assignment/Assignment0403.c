//assignment 4 q.3
//Display Non Factors of enterd number
//input 10
//output 3 4 6 7 8 9
#include<stdio.h>
void DisplayNonFactors(int);
int main()
{
    int iNo=0;

    printf("Enter a number:\n");
    scanf("%d",&iNo);

    DisplayNonFactors(iNo);

    return 0;
}
void DisplayNonFactors(int ivalue)
{
    int i=0;
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
  for (i=1;i<ivalue;i++)
    {
        if((ivalue%i)!=0)
        {
            printf("%d\n",i);
        }
    }
}