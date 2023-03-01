//Assignment 22
//Q.5
#include<stdio.h>
void StrRevX(char *start)
{
    char *end=start;
    char temp;
    while(*end !='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}
int main()
{
    char Arr[25];
    printf("Enter string:\n");
    scanf("%[^\n]s",Arr);

    StrRevX(Arr);

    printf("Reverese string is:\n%s",Arr);

    return 0;
}