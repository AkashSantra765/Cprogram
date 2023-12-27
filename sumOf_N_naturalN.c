#include<stdio.h>
int main()
{
    int n,a=0,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       a=i+a;
    }
    printf("The sum of first N natural number is %d",a);
    return 0;
}
