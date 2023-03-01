//Assignment 21
//Q.4
#include<stdio.h>
#include<stdbool.h>
bool CheckSpecial(char Ch)
{
    if((Ch>='a')&&(Ch<='z') || (Ch>='A')&&(Ch<='Z') || (Ch>=0)&&(Ch<=9))
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char CValue='\0';
    char bRet='\0';
    printf("Enter a character :\n");
    scanf("%c",&CValue);
    bRet=CheckSpecial(CValue);
    if(bRet==true)
    {
        printf("Character is special\n");
    }
    else
    {
        printf("Character is not special symbol\n");
    }
    return 0;
}