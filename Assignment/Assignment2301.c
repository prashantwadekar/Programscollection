//Assignment 23
//Q.1
#include<stdio.h>
void Strlwrx(char str[])
{
    int i=0;
     while(str[i] !='\0')
    {
        if((str[i]>='A')&&(str[i]<='Z'))
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("Sring in  lowercase is:%s",str);   
}
int main()
{
    char Arr[25];

    printf("Enter string in uppercse:\n");
    scanf("%[^\n]s",Arr);
    Strlwrx(Arr);
    return 0;
}