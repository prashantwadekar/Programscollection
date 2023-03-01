//Display First 5 numbers using itreation
#include<stdio.h>
void Display(void);
int main()
{

Display();
return 0;
}
void Display()
{
    int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}