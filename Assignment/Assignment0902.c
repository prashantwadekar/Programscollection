////Assignment 9 {Q.2}
//Input        5
//Output   5 # 4 # 3 # 2 # 1 #
#include<stdio.h>
void Pattern(int);
int main()
{
    int iValue=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}
void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>0;iCnt--)
    {
        printf("%d  #\t",iCnt);
    }
}