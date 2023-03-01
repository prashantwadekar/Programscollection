//check number has zero or not
#include<stdio.h>
#include<stdbool.h>
bool ChkZero(int);
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    
    bRet=ChkZero(iValue);
    if(bRet==true)
    {
        printf("it contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}
 bool ChkZero(int iNo)
{
    int iDigit;
    while(iNo>0)
    {
        iDigit=iNo%10;//101 1 0 1
        if(iDigit==0)
        {
            return true;
        }
        else
        {
            return false;
        }
        iNo=iNo/10;
    }
}