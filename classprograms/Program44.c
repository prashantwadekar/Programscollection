#include<stdio.h>
void DisplayTable(int);
int main()
{
    int iValue=0;
    printf("Enter to display its table\n");
    scanf("%d",&iValue);
    DisplayTable(iValue);
    return 0;
}
void DisplayTable(int iNo)
{
    int iCnt=0;
    if(iNo==0)
    {
        return;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=10;iCnt++)
    {
       printf("%d\n",iNo*iCnt);
    }

}