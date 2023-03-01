#include<stdio.h>
void Count(char *str)
{
    int CCount=0,SCount=0;
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            CCount++;
        }
        else if((*str>='a')&&(*str<='z'))
        {
            SCount++;
        }
        str++;
    }
    printf("Small letters are:%d\n",SCount);
    printf("Capital letters are:%d\n",CCount);
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string\n");
    scanf("%[^\n]s",Arr);

    Count(Arr);

    return 0;
}