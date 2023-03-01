#include<stdio.h>
#include<stdbool.h>
bool ChkPalindrome(int);
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter a value:\n");
    scanf("%d",&iValue);
    bRet=ChkPalindrome(iValue);
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
bool ChkPalindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    int iTemp=iNo;
    while(iNo !=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
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