//Assignment 11
//Q.2
//Accept number of rows and number of coloumns from user and display below pattern
//Input Row:4 Coloumn:4
//   A   B   C   D   
//   a   b   c   d
//   A   B   C   D 
//   a   b   c   d
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
    char Chsmall='\0',Chcap='\0';
    for(i=1;i<=iRow;i++)
    {
        for(j=1,Chsmall='a',Chcap='A';j<=iCol;j++,Chsmall++,Chcap++)
        {
            if((i%2)==0)
            {
                printf("%c\t",Chsmall);
            }
            else
            {
                printf("%c\t",Chcap);
            }
        }
        printf("\n");
    }
}