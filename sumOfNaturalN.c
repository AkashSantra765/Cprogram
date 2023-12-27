#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    printf("Results is %d",s);
    getch();
}

