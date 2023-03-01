000000#include<stdio.h>
int Addition(int iNO1,int iNO2)
{
   int iAns=0;
   iAns=iNO1+iNO2;
   return iAns;
}
int main()
{
   int ivalue1,ivalue2,iRet=0;
   printf("Enter value of first number\n");
   scanf("%d",&ivalue1);
   printf("Enter value of second number\n");
   scanf("%d",&ivalue2);
   iRet=Addition(ivalue1,ivalue2);
 g  printf("Addition of 2 number is %d\n",iRet);
   return 0;

}