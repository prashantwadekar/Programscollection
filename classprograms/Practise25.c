//Input:5
//output:(1+2+3+4+5)  15
#include<stdio.h>
int Addition(int);
int main()
{
    int iNo=0,iRet=0;
    printf("Enter a number:\n");
    scanf("%d",&iNo);
    iRet=Addition(iNo);
    printf("Addition is :%d\n",iRet);
    return 0;
}
int Addition(int ivalue)
{
    int isum=0;
    int icnt=0;
    for(icnt=1;icnt<=ivalue;icnt++)
    {
        isum=isum+icnt;
    }
    return isum;
}
