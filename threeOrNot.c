#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter a three digit  number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    if(i==3)
       printf("It is three digit number\n");
    else
       printf("it is not three digit number\n");
    return 0;
}
