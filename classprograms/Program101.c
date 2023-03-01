#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char C)
{
    if((C>='a')&&(C<='z'))
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
    bRet=CheckSmall(Ch);
    
    if(bRet==true)
    {
        printf("It is Small\n");
    }
    else
    {
        printf("It is not Small\n");
    }

    return 0;
}