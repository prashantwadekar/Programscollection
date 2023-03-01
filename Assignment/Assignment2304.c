//Assignment 23
//Q.4
#include<stdio.h>
void DisplyDigit(char *str)
{
    while(*str !='\0')
    {
        if((*str>='0')&&(*str<='9'))
        {
            printf("%s",str);
        }
        str++;
    }
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string\n");
    scanf("%[^\n]s",Arr);

    DisplyDigit(Arr);

    return 0;
}