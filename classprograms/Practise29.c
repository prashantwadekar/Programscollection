#include<stdio.h>
void DisplayFactors(int);
int main()
{
    int iNo=0;

    printf("Enter a number:\n");
    scanf("%d",&iNo);

    DisplayFactors(iNo);

    return 0;
}
void DisplayFactors(int ivalue)
{
    int iCnt=0;
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
    for(iCnt=1;iCnt<ivalue;iCnt++) //o(N)
    {
        if((ivalue%iCnt)==0) //Icnt is Factor
        {
            printf("%d \n",iCnt);
        }
    }

}