//Assignment 20
//Q.3
#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char CValue)
{
    if((CValue>='0') && (CValue<='9'))
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
    char Ch='\0';
    char bRet=false;
    printf("Enter charcter\n");
    scanf("%c",&Ch);
    bRet=CheckDigit(Ch);
    if(bRet==true)
    {
    
        printf("It is digit\n");
    }
    else
    {
        printf("It is not digit\n");
    }
    return 0;
}