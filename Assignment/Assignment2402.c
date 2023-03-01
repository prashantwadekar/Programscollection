//Assignment 24
//Q.2
#include<stdio.h>
int Count(char *Str,char Ch)
{
    int iCnt=0;
    if(Str==NULL)
    {
        return -1;
    }

    while(*Str !=0)
    {
        if(*Str==Ch)
        {
            iCnt++;
        }
        Str++;
    }
    return iCnt;
}
int main()
{
    char Arr[25];
    int iRet=0;
    char CValue='\0';
    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character:\n");
    scanf(" %c",&CValue);

    iRet=Count(Arr,CValue);

    printf("Frequency is:%d",iRet);

    return 0;
}