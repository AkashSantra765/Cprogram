#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    n=n/10;
    printf("After remove the last digit results is %d",n);
    return 0;
}
