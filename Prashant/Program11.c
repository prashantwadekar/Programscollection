//Input 3(3+2+1)
//output 6
#include<stdio.h>
int DisplaySum(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("enter a value:\n");
    scanf("%d",&iNo);
   iRet=DisplaySum(iNo);
   printf("Output is:%d\n",iRet);
    return 0;
}
int DisplaySum(int ivalue)
{
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
   int iCnt=0;
   int iSum=0;
  for(iCnt=1;iCnt<=ivalue;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;
}