#include<stdio.h>
void StrCpySmall(char *src,char *dest)
{
    while(*src !='\0')
    {
        if((*src>='A')&&(*src<='Z'))
        {
            *dest=*src+32;
            dest++;
        }
        else if((*src>='a')&&(*src<='z'))
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
    char arr[30]="MaRVeLLOUS";

    char brr[30];

    StrCpySmall(arr,brr);

    printf("%s",brr);

    return 0;
}