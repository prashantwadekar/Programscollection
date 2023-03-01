//Assignment 11
//Q.1
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:4 Coloumn:4
//   A   B   C   D   
//   A   B   C   D 
//   A   B   C   D 
//   A   B   C   D
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
    int i,j=0;
    char ch='\0';
    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch='A';j<=iCol;j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}    