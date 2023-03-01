#include<stdio.h>
int SmallCount(char *str)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter string\n");
    scanf("%[^\n]s",Arr);

    iRet=SmallCount(Arr);

    printf("Small letters are:%d",iRet);

    return 0;
}