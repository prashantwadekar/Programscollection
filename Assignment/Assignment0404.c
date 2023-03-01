//q.4 assignment 4
//summation of nonfactors of entered number
//input 12
//output 50
#include<stdio.h>
int SumNonFact(int);
int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter a number:\n");
    scanf("%d",&iNo);
    iRet=SumNonFact(iNo);
    printf(" Sum of Non Factor number is %d\n",iRet);
    return 0;
}
int SumNonFact(int ivalue)
{
    int iCnt=0;
    int iSum=0;
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
  for (iCnt=1;iCnt<ivalue;iCnt++)
    {
        if((ivalue%iCnt)!=0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}