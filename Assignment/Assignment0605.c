//A3>Q5>>
//Difference return between summation of even digits and summation  odd digits
//input    2395         1018      8440   5733
//output   -15(2-17)    6(8-2)    16(16-0)     -18(0-18)
#include<stdio.h>
int CountDiffEven(int);
int CountDiffOdd(int);
int main()
{
    int iValue,iDiff,iRet1,iRet2=0;
    printf("Enter a Value:\n");
    scanf("%d",&iValue);
    iRet1=CountDiffEven(iValue);
    iRet2=CountDiffOdd(iValue);
    iDiff=iRet1-iRet2;
    printf(" Difference between  summation of Even and odd Digits are: %d",iDiff);
    return 0;
}
int CountDiffEven(int iNo)
{
    int iDigit,iSum=0;
    while (iNo>0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            iSum=iSum+iDigit;
        }
        iNo=iNo/10;
    }
    return iSum;
}
int CountDiffOdd(int iInput)
{
    int iDigit,iAdd=0;
    while(iInput>0)
    {
        iDigit=iInput%10;
        if(iInput%2 !=0)
        {
            iAdd=iAdd+iDigit;
        }
        iInput=iInput/10;
    }
    return iAdd;
}