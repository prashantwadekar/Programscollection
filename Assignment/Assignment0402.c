#include<stdio.h>
void DisplayFact(int iNo)
{
    int iCnt=0;
    for(iCnt=(iNo-1);iNo>1;iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFact(iValue);

    return 0;
}