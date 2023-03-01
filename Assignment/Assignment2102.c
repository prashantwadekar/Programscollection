//Assignment 21
//Q.2
#include<stdio.h>
char Display(char CValue)
{
    char CRet='\0';
    if((CValue>='A')&&(CValue<='Z'))
    {
       CRet=CValue+32;
    }
    else if((CValue>='a')&&(CValue<='z'))
    {
        CRet=CValue-32;
    }
    else
    {
        CRet=CValue;
    }
    return CRet;
}
int main()
{
    char Ch='\0';
    char CRes='\0';
    printf("Enter charcter:\n");
    scanf("%c",&Ch);
    CRes=Display(Ch);
    printf(" Output is: %c",CRes);
    return 0;
}