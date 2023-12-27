#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter a number \n");
    scanf("%d",&n);
    a=n%10;
    n=n-a;
    printf("THe last digit of a number in a stored in a variable as zero results is %d",n);
    return 0;
}
