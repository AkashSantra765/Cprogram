#include<stdio.h>
int main()
{
    int n,add=0;
    printf("Enter the numbers\n");
    while(n!=0)
    {
        scanf("%d",&n);
        add=add+n;
        if(n==0)
            break;
    }
    printf("Results is %d",add);
    return 0;
}
