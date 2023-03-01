//Assignment 20
//Q.2
#include<stdio.h>
#include<stdbool.h>
bool CheckCap(char CValue)
{
    if((CValue>='A') && (CValue<='Z'))
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
    bRet=CheckCap(Ch);
    if(bRet==true)
    {
    
        printf("Chracter is Capital case charcter\n");
    }
    else
    {
        printf("Charcter is not Capital case charcter\n");
    }
    return 0;
}