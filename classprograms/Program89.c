//String
#include<stdio.h>
int main()
{
    char Arr[11]="Marvellous";
    printf("%s\n",&Arr[0]); //50
    printf("%s\n",&Arr[5]); //55
    printf("%s\n",&Arr[9]); //59

    printf("%s\n",Arr); //50
    printf("%s\n",Arr+5); //50+5
    printf("%s\n",Arr+9); //50+9
    return 0;
}