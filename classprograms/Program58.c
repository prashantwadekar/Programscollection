//Input 3 3
//output 1 2 3
//       1 2 3
//       1 2 3
#include<stdio.h>
void Display(int,int);
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter Number of Rows:\n");
    scanf("%d",&iValue1);
    printf("Enter Number of coloums:\n");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}
void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}