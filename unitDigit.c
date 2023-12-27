#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    n=n%10;
    printf("The unit digit is %d",n);
    return 0;
}
