#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char C)
{
    if((C>='0')&&(C<='9'))
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
    bool bRet=0;
    printf("Enter Character\n");
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