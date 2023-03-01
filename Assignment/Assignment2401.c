//Assignment 24
//Q.1
#include<stdio.h>
#include<stdbool.h>
bool CheckChar(char *str,char Ch)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str !='\0')
    {
        if(*str==Ch)
        {
            return true;
        }
        else
        {
            return false;
        }
        str++;
    }
}
int main()
{
    char Arr[30];
    bool bRet=false;
    char CValue='\0';

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter charcter:\n");
    scanf(" %c",&CValue); 

    bRet=CheckChar(Arr,CValue);

    if(bRet==true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }   
    return 0;
}