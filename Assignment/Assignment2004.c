//Assignment 20
//Q.4
#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char CValue)
{
    if((CValue>='a')&&(CValue<='z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    bool bRet=false;
    char Ch='\0';
    printf("Enter Charcter\n");
    scanf("%c",&Ch);
    bRet=CheckSmall(Ch);
    if(bRet==true)
    {
        printf("It is small case charcter\n");
    }
    else
    {
        printf("It is not small case charcter\n");
    }
    return 0;
}