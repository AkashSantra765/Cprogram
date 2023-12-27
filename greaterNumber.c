#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("Your enter number %d both are same",a);
    else if(a>b)
        printf("The greater number is %d",a);
    else
        printf("The greater number is %d",b);
    return 0;
}
