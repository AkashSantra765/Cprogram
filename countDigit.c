
#include<stdio.h>
int main()
{
    int n,i,b=1,c=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    while(b!=0)
    {
        b=n/10;
        n=b;
        c++;
    }
    printf("%d digit number\n",c);
    return 0;
}
