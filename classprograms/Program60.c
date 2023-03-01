//Input 4 4
//output $ * * *
//       * $ * *
//       * * $ *
//       * * * $
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
           if(i==j)
          {
            printf("$\t");
          }
          else
          {
              printf("*\t");
          }
        }
        printf("\n");
    }
}