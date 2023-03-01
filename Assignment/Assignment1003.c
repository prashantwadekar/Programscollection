//Assignment 10
//Q.3
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:3 Coloumn:5
//   5  4  3  2  1
//   5  4  3  2  1
//   5  4  3  2  1
#include<stdio.h>
void Pattern(int,int);
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter a number of rows:\n");
    scanf("%d",&iValue1);
      printf("Enter a number of Coloumns:\n");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>=1;j--)
        {
            printf("%d \t",j);
        }
        printf("\n");
    }
}