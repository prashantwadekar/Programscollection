//Assignment 14
//Q.4
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:6 Coloumn:6
//  *  *  *  *  *  *
//  *  *           *
//  *     *        *
//  *        *     *
//  *           *  *
//  *  *  *  *  *  *
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
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(i==1||i==6 ||j==1||j==6)
            {
               printf("*\t");
            }    
            else if(i==j)
            {
                printf("*\t");
            } 
            else
            {
                printf("\t");
            } 
        }
        printf("\n");
    }
}