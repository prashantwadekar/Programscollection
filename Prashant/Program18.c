#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(int);
int Reverse(int);
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
bool CheckPalindrome(int iNo)
{
    int iRes=0; 
    iRes=Reverse(iNo);
    if(iRes==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Reverse(int iInput)
{
    int iDigit=0,iRev=0,iTemp=0;
    while(iInput>0)
    {
        iDigit=iInput%10;
        iRev=(iRev*10)+iDigit;
        iInput=iInput/10;
    }
    return iRev;
}