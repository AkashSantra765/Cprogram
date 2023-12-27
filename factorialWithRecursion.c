#include<stdio.h>
int main()
{
    int n,k;
    printf("Enter a number\n");
    scanf("%d",&n);
    k=fact(n);
    printf("The factorial of a given number is %d",k);
    return 0;
}
int fact(int x)
{
    int f;
    if(x==1)
        return 1;
    f=x*fact(x-1);
    return f;
}
