//assignment 4 
//q.5
//Difference between NonFators and Factors of entered number
//input 12
//output -34 (16-50)
#include<stdio.h>
int SumFact(int);
int SumNonFact(int);
int main()
{
    int iNo,iNo1=0;
    int iRes=0;
    int iRet1=0;
    int iRet2=0;
    printf("Enter a number:\n");
    scanf("%d",&iNo);
    iRet1=SumFact(iNo);
    iRet2=SumNonFact(iNo);
   // printf(" The Difference Between NonFactors and Factors is:%d\n",iRet2-iRet1);
   iRes=(iRet2-iRet1);
   printf("%d",iRes);
    return 0;
}
int SumFact(int ivalue1)
{
    int iCnt1=0;
    int iSum1=0;
    if(ivalue1<0)
    {
        ivalue1=-ivalue1;
    }
  for (iCnt1=1;iCnt1<ivalue1;iCnt1++)
    {
        if((ivalue1%iCnt1)==0)
        {
            iSum1=iSum1+iCnt1;
        }
    }
    return iSum1;
}
int SumNonFact(int ivalue2)
{
    int iCnt2=0;
    int iSum2=0;
    if(ivalue2<0)
    {
        ivalue2=-ivalue2;
    }
  for (iCnt2=1;iCnt2<ivalue2;iCnt2++)
    {
        if((ivalue2%iCnt2)!=0)
        {
            iSum2=iSum2+iCnt2;
        }
    }
    return iSum2;
}
