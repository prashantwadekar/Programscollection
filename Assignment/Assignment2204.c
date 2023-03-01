//Assignment 22
//Q.4
#include<stdio.h>
#include<stdbool.h>
bool ChkVowel(char *Str)
{
    int bValue=0;
    while(*Str !='\0')
    {
        if((*Str=='A')||(*Str=='E')||(*Str=='I')||(*Str=='O')||(*Str=='U')||(*Str=='a')||(*Str=='e')||(*Str=='i')||(*Str=='o')||(*Str=='u'))
        {
            bValue++;
        }
        else 
        {
            bValue;
        }
        Str++;
    }
    if(bValue++)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char Arr[20];
    bool bRet=false;
    printf("Enter a String:\n");
    scanf("%[^\n]s",Arr);
    bRet=ChkVowel(Arr);
    if(bRet==true)
    {
        printf("Entered string contains Vowel\n");
    }
    else
    {
        printf("Entered string is not contains Vowel\n");
    }
    return 0;
}
