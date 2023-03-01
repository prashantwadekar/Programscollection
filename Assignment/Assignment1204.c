//Assignment 12
//Q.4
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:4 Coloumn:4
//   *  *  *  *  *     11 12 13 14 15 
//   *  @  @  @  *     21 22 23 24 25 
//   *  @  @  @  *     31 32 33 34 35 
//   *  @  @  @  *     41 42 43 44 45 
//   *  *  *  *  *     51 52 53 54 55 
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
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        if(i==1||i==iRow||j==1||j==iCol)
        {
           printf("*\t");
        }
        else
        {
            printf("@\t");
        }
          printf("\n");
    }
}