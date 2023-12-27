#include<stdio.h>
int main()
{
    int n;
    printf("Enter a year\n");
    scanf("%d",&n);
    if((n%4==0)||(n%400==0))
        printf("%d is the leap year",n);
    else
        printf("%d is the not leap year",n);
    return 0;
}
