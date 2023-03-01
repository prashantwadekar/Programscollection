//Assignment 15
//Q.4
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:6 Coloumn:6
//  *  *  *  *  *  *      11 12 13 14 15 16
//  *  #  #  #  *  *      21 22 23 24 25 26 
//  *  #  #  *  $  *      31 32 33 34 35 36 
//  *  #  *  $  $  *      41 42 43 44 45 46
//  *  *  $  $  $  *      51 52 53 54 55 56
//  *  *  *  *  *  *      61 62 63 64 65 66
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
    for(i=iRow;i>=1;i--)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i==1||i==iRow||j==1||j==iCol||i==j)
            {
                printf("*\t");
            }
            else
            {
                if(i<j)
                {
                    printf("$\t");
                }
                else
                {
                    printf("#\t");
                }
            }
        }
        printf("\n");
    }
}