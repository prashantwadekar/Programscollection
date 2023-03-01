#include<stdio.h>
void Display(char Brr[])
{
    printf("Name is %s\n",Brr);
}
int main()
{
    char Arr[50];
    printf("Enter your Name\n");
    scanf("%[^'\n']s",Arr);
    Display(Arr);
    return 0;
}