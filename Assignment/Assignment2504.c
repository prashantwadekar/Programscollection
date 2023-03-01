#include<stdio.h>
void StrCpySmall(char *src,char *dest)
{
    while(*src!='\0')
    {
        if((*src>='a')&&(*src<='z'))
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
    char arr[30]="Marvellous multi OS";
    char brr[30];

    StrCpySmall(arr,brr);

    printf("Small letters:\n%s",brr);

    return 0;
}