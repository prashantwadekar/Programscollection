//Assignment 20
//Q.1
#include<stdio.h>
#include<stdbool.h>
bool CheckAplpha(char CValue)
{

    if((CValue>='a') && (CValue<='z') || (CValue>='A') &&(CValue<='Z'))
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
    bool bRet=false;
    printf("Enter Character:\n");
    scanf("%c",&Ch);
    bRet=CheckAplpha(Ch);
    if(bRet==true)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not Character\n");
    }
    
    return 0;
}