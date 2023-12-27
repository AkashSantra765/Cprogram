
#include<stdio.h>
int main()
{
    int n,a=0,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
            a=i+a;
    }
    printf("The sum of first N even natural number is %d",a);
    return 0;
}
