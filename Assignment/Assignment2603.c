#include<stdio.h>
void StrCpyCap(char *src,char *dest)
{
    while(*src !='\0')
    {
        if((*src>='a')&&(*src<='z'))
        {
            *dest=*src-32;
            dest++;
        }
        else if((*src>='A')&&(*src<='Z'))
        {
            *dest=*src;
            dest++;
        }
         else if((*src>='0')&&(*src<='9'))
        {
            *dest=*src;
            dest++;
        }
         else if(*src>=' ')
        {
            *dest=*src;
            dest++;
        }
        src++;
    }
    *dest='\0';
}
int main()
{
    char arr[30]="marVellOus";

    char brr[30];

    StrCpyCap(arr,brr);

    printf("%s",brr);

    return 0;
}