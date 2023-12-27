#include<stdio.h>
int main()
{
    int n=1,i=1,j=1,a;
    while(n<=10)
    {
        printf("5\t");
        n++;
    }
    printf("\n");
    while(i<=10)
    {
        printf("%d\t",i);
        i++;
    }
    printf("\n");
    while(j<=10)
    {
        a=j*5;
        printf("%d\t",a);
        j++;
    }
    return 0;
}
