#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    n=n%10;
    printf("The last digit is %d",n);
    //use to remove the last digit
   /* n=n/10;
    printf("After remove the last digit the number is %d",n);*/
    getch();
}
