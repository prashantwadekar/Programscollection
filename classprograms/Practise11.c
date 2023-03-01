//Accept one number from user and print number of * on screen
#include<stdio.h>
void Accept(int iNo)
{
 int iCnt=0;
 for (iCnt=0;iCnt<iNo;iCnt++)
  {
    printf("*");
  }
}
int main()
{
    int ivalue=0;
    ivalue=5;
    Accept(ivalue);
    return 0;
}