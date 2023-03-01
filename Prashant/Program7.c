//Display five times # on screen using function
#include<stdio.h>
void Display(void);
int main()
{
    Display();
    return 0;
}
void Display()
{
    int i=0;
    for(i=1;i<=5;i++)
    {
        printf("%d\n",i);
    }
}