//Assignment 15
//Q.1
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:4 Coloumn:4
//  *  *  *  #  
//  *  *  #  *
//  *  #  *  *
//  #  *  *  *   
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
        {
            if((i+j)==(iRow+1))
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
