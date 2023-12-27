#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("Your enter character is uppercase\n");
    else if(ch>='a'&&ch<='z')
        printf("Your enter character is lowercase\n");
    else
        printf("Your enter key is wrong, please enter a character\n  ");
    return 0;
}
