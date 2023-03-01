#include<stdio.h>
char SmallToCapital(char C)
{
    if((C>='a')&&(C<='z'))
    {
        return C-32;
    }
}
int main()
{
    char Ch='\0',CRet='\0';

    printf("Enter Character\n");
    scanf("%c",&Ch);
    CRet=SmallToCapital(Ch);

    printf("Capital letter is:%c\n",CRet);

    return 0;
}