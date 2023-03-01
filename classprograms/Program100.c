#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char C)
{
    if((C>='A')&&(C<='Z'))
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
    bRet=CheckCapital(Ch);
    
    if(bRet==true)
    {
        printf("It is Capital\n");
    }
    else
    {
        printf("It is not Capital\n");
    }

    return 0;
}