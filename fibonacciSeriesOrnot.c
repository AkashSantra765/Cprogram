#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
     {
        if(n==a)
            break;
        c=a+b;
        a=b;
        b=c;
     }
     if(n==a)
        printf("Fibonacci series\n");
     else
        printf("Not Fibonacci series\n");
    return 0;
}
