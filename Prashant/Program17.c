#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(int);
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    bRet=CheckPalindrome(iValue);
    if(bRet==true)
    {
        printf("Number is palindrome\n");
    }
    else
    {
        printf("Number is not palindrome\n");
    }
    return 0;
}
bool CheckPalindrome(int iNo) //123
{
    int iDigit=0,iRev=0;
    int iTemp=0;
    iTemp=iNo;
    while(iNo>0)
    {
        iDigit=iNo%10; //3 2 1
        iRev=(iRev*10)+iDigit; //3 32  321  
        iNo=iNo/10; //12 1 0
    }
    if(iRev==iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}