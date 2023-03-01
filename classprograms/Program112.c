#include<stdio.h>
int CountFrequency(char *str,char Ch)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str !='\0')
    {
        if(*str==Ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[30];
    int iRet=0;
    char CValue='\0';

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter charcter:\n");
    scanf(" %c",&CValue); //IMP space:because enter button store in input buffer memory and acts as character

    iRet=CountFrequency(Arr,CValue);

    printf("Frequency is : %d\n",iRet);
    
    return 0;
}