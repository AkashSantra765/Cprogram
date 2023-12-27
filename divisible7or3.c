#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if((n%7==0)||(n%3==0))
        printf("Divisible\n");
    else
        printf("Not divisible\n");
    return 0;
}
