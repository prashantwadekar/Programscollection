#include<stdio.h>
#include<Stdbool.h>
bool CheckEven(int);
int main()
{
    bool bRet=false;
    int iValue=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);
    bRet=CheckEven(iValue);
    if(bRet==true)
    {
        printf("%d Number is even\n",iValue);
    }
    else
    {
        printf("%d Number is not even \n",iValue);
    }
    return 0;
}
bool CheckEven(int iNo)
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