//Assignment 23
//Q.2
#include<stdio.h>
void Struprx(char str[])
{
    int i=0;
     while(str[i] !='\0')
    {
        if((str[i]>='a')&&(str[i]<='z'))
        {
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("Sring in  Uppercase is:\n%s",str);   
}
int main()
{
    char Arr[25];

    printf("Enter string in lowercase:\n");
    scanf("%[^\n]s",Arr);
    Struprx(Arr);
    return 0;
}