#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i,d=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        d=a;
        c=a+b;
        a=b;
        b=c;
    }
    printf("The Nth term of the fibonacci series is %d",d);
    return 0;
}
