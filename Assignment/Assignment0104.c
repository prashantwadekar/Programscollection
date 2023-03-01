//Assignment 1 
//Q.4 Accept one number from user and check whether number is divisible by 5 or not
#include<stdio.h>
typedef int bool;
#define true 1
#define false 0
bool Check(int);
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    bRet=Check(iValue);
    if(bRet==true)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }
    return 0;
}
bool Check(int iNo)
{
    if((iNo%5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
