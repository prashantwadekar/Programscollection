#include<stdio.h>
void Swap(char *p,char *q)
{
    char temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    char Ch1,Ch2;

    printf("Enter first character:\n");
    scanf("%c",&Ch1);

     printf("Enter second character:\n");
    scanf(" %c",&Ch2);

    printf("Before swapping characters are %c %c\n",Ch1,Ch2);

    Swap(&Ch1,&Ch2); //swap(100,200)
    
    printf("After swapping characters are %c %c\n",Ch1,Ch2);

    return 0;
}