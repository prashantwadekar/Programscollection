#include<stdio.h>
void StrCatX(char *src ,char *dest)
{
    while(*src!='\0')
    {
        src++;
    }
    while (*dest!='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
}
int main()
{
    char arr[50]="Marvellous Infosystems";
    char brr[30]="Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr);

    return 0;
}