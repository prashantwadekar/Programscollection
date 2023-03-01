//Palindrome number using 3 function
#include<stdio.h>
#include<stdbool.h>
int Reverse(int);
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
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not Palindrome\n");
    }
    return 0;
}
bool CheckPalindrome(int iInput)
{
    int iNumber=0;
    iNumber=Reverse(iInput);
    if(iNumber==iInput)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;
    while(iNo !=0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    return iRev;
}