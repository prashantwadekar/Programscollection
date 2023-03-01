//Assignment 11
//Q.3
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:3 Coloumn:5
//   A  A  A  A  A
//   B  B  B  B  B
//   C  C  C  C  C
#include<stdio.h>
void Pattern(int,int);
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter number of Rows:\n");
    scanf("%d",&iValue1);
    printf("Enter number of Coloumns:\n");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
} 
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char Ch='\0';
    for(i=1,Ch='A';i<=iRow;i++,Ch++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%c\t",Ch);
        }
        printf("\n");
    }
}