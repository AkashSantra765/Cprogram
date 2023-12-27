#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       a=i+a;
    }
    printf("Sum of first natural number is %d",a);
    return 0;
}
