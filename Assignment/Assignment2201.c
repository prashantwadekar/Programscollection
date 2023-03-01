//Assignment 22
//Q.1
#include<stdio.h>
int CountDisplay(char *str)
{
    int iCnt=0;
    while(*str !='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[25];
    int iRes=0;
    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);
    iRes=CountDisplay(Arr);
    printf("Number of capital alphabhet is:%d\n",iRes);
    return 0;
}