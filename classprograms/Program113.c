#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(char *str) //(str 50)
{
    char *start=NULL;
    char *end=NULL;
    start=str;
    end=str;
    while(*end !='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        if(*start !=*end)
        {
            break;
        }
        start++;
        end--;
    }
    if(start<end)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char Arr[30];
    bool bRet=false;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    bRet=CheckPalindrome(Arr); //Checkpalindrome(50)
    if(bRet==true)
    {
        printf("It is Palindrome\n");
    }
    else
    {
        printf("It is not palindrome\n");
    }
    
    return 0;
}