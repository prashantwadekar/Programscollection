//Assignment 21
//Q.3
#include<stdio.h>
void Display(char Ch)
{
    int i=0;
    if((Ch>='A')&&(Ch<='Z'))
    {
        for(i=Ch;i<='Z';i++,Ch++)
        {
            printf("%c\t",Ch);
        }
    }
    else if((Ch>='a')&&(Ch<='z'))
    {
        for(i=Ch;Ch>='a';i--,Ch--)
        {
            printf("%c\t",i);
        }
    }
}
int main()
{
    char CValue='\0';

    printf("Enter character\n");
    scanf("%c",&CValue);

    Display(CValue);

    return 0;
}