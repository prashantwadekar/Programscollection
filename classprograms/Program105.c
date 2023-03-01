#include<stdio.h>
char CharToggle(char C)
{
    if((C>='A')&&(C<='Z'))
    {
        return C+32;
    }
    else if((C>='a')&&(C<='z'))
    {
        return C-32;
    }
}
int main()
{
    char Ch='\0',CRet='\0';

    printf("Enter Character\n");
    scanf("%c",&Ch);
    CRet=CharToggle(Ch);

    printf("Toggle letter is:%c\n",CRet);

    return 0;
}