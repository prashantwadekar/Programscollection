#include<stdio.h>
void Display(char *Brr)
{
    printf("Name is %s\n",Brr);
}
int main()
{
    char Arr[10];
    printf("Enter your Name\n");
    scanf("%[^'\n']s",Arr);
    Display(Arr); //Display(50); Name of Array is internally considered as its base address
    return 0;
}