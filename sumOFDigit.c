#include<stdio.h>
int main()
{
    int a,b=0,i, n;
    printf("Enter three digit of numbers\n");
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
       a=n%10;
       n=n/10;
       b=a+b;
    }
       printf("Results is %d",b);
       return 0;

}
