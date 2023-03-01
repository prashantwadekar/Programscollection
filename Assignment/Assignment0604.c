//A3 Q4
//Multification of all digits 
//input  2395 1018 9440 922432
//output 270  0    0     864
#include<stdio.h>
int DigitMult(int);
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter a value:\n");
    scanf("%d",&iValue);
    iRet=DigitMult(iValue);
    printf("Multification of all digits are:%d\n",iRet);
    return 0;
}
int DigitMult(int iNo)
{
    int iDigit=0;
    int iFact=1;
    while(iNo>0)
    {
        iDigit=iNo%10;
        iFact=(iFact*iDigit);
        iNo=iNo/10;
    }
    return iFact;
}