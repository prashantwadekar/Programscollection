//Assignment 11
//Q.5
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:3 Coloumn:4
//   1   2   3   4
//   5   6   7   8
//   9  10   11  12
#include<stdio.h>
void Pattern(int,int);
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter number of rows:\n");
    scanf("%d",&iValue1);
    printf("Enter number of coloumns:\n");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    int iCount=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            iCount=iCount+1;
            printf("%d\t",iCount);
        }
        printf("\n");
    }
}