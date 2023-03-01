#include<stdio.h>
int DisplayFactMult(int iNo)
{
    int iCnt=0,iMul=1;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iMul=iMul*iCnt;
        }
    }
    return iMul;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=DisplayFactMult(iValue);

    printf("Multification of factors are %d\n",iRet);

    return 0;
}