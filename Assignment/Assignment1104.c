//Assignment 11
//Q.4
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:4 Coloumn:5
//   4  4  4  4  4
//   3  3  3  3  3
//   2  2  2  2  2
//   1  1  1  1  1
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
    for(i=iRow;i>0;i--)
    {
       for(j=1;j<=iCol;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}