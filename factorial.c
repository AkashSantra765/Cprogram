#include<stdio.h>
int main()
{
    int n,a=1,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        a=a*i;
    printf("The factorial of a given number is %d",a);
    return 0;
}
