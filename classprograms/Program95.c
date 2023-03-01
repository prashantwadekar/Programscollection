#include<stdio.h>
void Display(char *Brr)
{
    while(*Brr!='\0')
    {
        printf("%c\n",*Brr);
        Brr++;
    }
}
int main()
{
    char Arr[10];
    printf("Enter your Name\n");
    scanf("%[^'\n']s",Arr); //50
    Display(Arr); //Display(50); Name of Array is internally considered as its base address
    return 0;
}