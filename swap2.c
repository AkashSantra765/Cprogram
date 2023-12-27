#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two number\n");
    scanf("%d%d",&a,&b,&c);
    c=a;
    a=a+b;
    b=a-b;
    a=a-c;
    printf("After swap the values of a is %d the value of b is %d",a,b);
    return 0;
}
