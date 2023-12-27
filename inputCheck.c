#include<stdio.h>
#include<conio.h>
int main()
{
    char n;
    printf("Enter a charecter \n");
    scanf("%c",&n);
    if(n>='A' && n<='Z')
        printf("Your enter charecter is uppercase alphabet\n");
    else if(n>='a' && n<='z')
        printf("Your enter charecter is lowercase alphabet\n");
    else if (n>='0' && n<='9')
        printf("Your enter charecter is digit\n");
    else
        printf("Your enter charecter is special charecter \n");
    getch();
}
