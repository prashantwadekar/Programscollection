//Assignment 24
//Q.3
#include<stdio.h>
int FirstChar(char *Str,char Ch)
{
    int i=0;
    while(Str[i] !='\0')
    {
        if(Str[i]==Ch)
        {
            return i; 
        }
        i++;
    }
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

    iRet=FirstChar(Arr,CValue);

    printf("First Occurance %d",iRet);

    return 0;
}