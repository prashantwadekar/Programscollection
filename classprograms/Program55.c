//Accept Number from user and count digts which is greater than 5
//7497387::5        8848::3
#include<stdio.h>
int Count(int);
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter a Number:\n");
    scanf("%d",&iValue);
    iRet=Count(iValue);
    printf("Digit Greater than 5 count is %d",iRet);
    return 0;
}
int Count(int iNo)
{
    int iDigit=0;
    int Cnt=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit>=5)
        {
            Cnt++;
        }
        iNo=iNo/10;
    }
    return Cnt;
}