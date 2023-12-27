#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
/*if(n%5)
    printf("not Divisible by 5");
else
    printf("Divisible by ")*/
if(n%5==0)
printf("It is a divisible by 5");
else
printf("It is not divisible by 5");
getch();
}
