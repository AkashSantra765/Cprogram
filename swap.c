#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter two number\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("After swap the value of a is %d and the value b is %d",a,b);
getch();
}
