#include<stdio.h>
void f1(int);
int main()
{
    f1(100);
    return 0;
}
void f1(int n)
{
    if(n>0)
    {
        f1(n-1);
        printf("%d\n",n);
    }
}
