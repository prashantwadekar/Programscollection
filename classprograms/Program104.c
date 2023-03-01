#include<stdio.h>
char CapitalToSmall(char C)
{
    if((C>='A')&&(C<='Z'))
    {
        return C+32;
    }
}
int main()
{
    char Ch='\0',CRet='\0';

    printf("Enter Character\n");
    scanf("%c",&Ch);
    CRet=CapitalToSmall(Ch);

    printf("Small letter is:%c\n",CRet);

    return 0;
}