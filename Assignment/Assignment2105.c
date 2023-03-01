//Assignment 21
//Q.5
#include<stdio.h>
void Display()
{

}
int main()
{
    char CValue='\0';
    printf("enter a character:\n");
    scanf("%c",&CValue);
    Display();
    printf("Decimal %d\n",CValue);
    printf("Hexadecimal :%x\n",CValue);
    printf("Octal %o\n",CValue);
    return 0;
}