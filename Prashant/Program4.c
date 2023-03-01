//Accept number from user and display number of times *
//input     4
//output *  *  *   *
#include<stdio.h>
void Displaystar(int);
int main()
{
    int iNo=0;
    printf("Enter a number:\n");
    scanf("%d",&iNo);
    Displaystar(iNo);
    return 0;
}
void Displaystar(int ivalue)
{
     int iCnt=0;
    for(iCnt=1;iCnt<=ivalue;iCnt++)
    {
        printf("*\t",iCnt);
    }

}