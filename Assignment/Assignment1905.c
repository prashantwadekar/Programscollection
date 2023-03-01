//Summation of all digits 
//input  955  922432 122
//output 225  864     4
#include<stdio.h>
int DigitSum(int);
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter a value:\n");
    scanf("%d",&iValue);
    iRet=DigitSum(iValue);
    printf("Summatation of all digits are:%d\n",iRet);
    return 0;
}
int DigitSum(int iNo)
{
    int iDigit=0;
    int iFact=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        iFact=iFact+iDigit;
        iNo=iNo/10;
    }
    return iFact;
}