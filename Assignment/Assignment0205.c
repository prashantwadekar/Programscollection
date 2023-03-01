//Assignment 2
//Q.5 Accept one number from user and check whether number is even or odd
#include<stdio.h>
typedef int bool;
#define true 1
#define false 0
bool ChkEven(int);
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    bRet=ChkEven(iValue);
    if(bRet==true)
    {
    printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}
bool ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}