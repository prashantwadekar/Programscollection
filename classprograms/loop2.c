//Accept number from user if number is less than 10 then print "Hello" otherwise print "Demo"
#include<stdio.h>
 int  Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int ivalue=0;
    printf("Enter number:\n");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}