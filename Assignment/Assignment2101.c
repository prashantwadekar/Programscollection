//Assignment 21
//Q.1
#include<stdio.h>
void DisplayASCII()
{
    int i=0;
    printf("********************************************************\n");
    printf("ASCII TABLE\n");
    printf("Decimal\tHexadecimal\tOctal");
    for(i=0;i<=127;i++)
    {
        printf("%d\t%x\t %o\n",i,i,i);
    }
    printf("*******************************************************\n");
}
int main()
{
    DisplayASCII();
    return 0;
}