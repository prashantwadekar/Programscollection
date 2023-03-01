//Assignment 20
//Q.5
#include<stdio.h>
int DisplayScedule(char Ch)
{
    if(Ch=='A'||Ch=='a')
    {
        printf("Exam time is 7.00 AM");
    }
    else if(Ch=='B'||Ch=='b')
    {
        printf("Exam time is 8.30 AM");
    }
    else if(Ch=='C'||Ch=='c')
    {
        printf("Exam time is 9.20 AM");
    }
    else if(Ch=='D'||Ch=='d')
    {
        printf("Exam time is 10.30 AM");
    }
}
int main()
{
    char CValue='\0';
    printf("Enter Division:\n");
    scanf("%c",&CValue);
    DisplayScedule(CValue);
    return 0;
}