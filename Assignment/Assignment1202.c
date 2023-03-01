//Assignment 12
//Q.2
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:4 Coloumn:4
//   *  *  *  *    11 12 13 14
//   *  *  *  #    21 22 23 24
//   *  *  #  #    31 32 33 34
//   *  #  #  #    41 42 43 44
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
    for(i=iRow;i>0;i--)
    {
        for(j=1;j<=iCol;j++)
        {
            if(j<=i)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}