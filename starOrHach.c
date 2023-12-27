#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n+1-i)
                printf("*");
            else
                printf("#");
        }
        printf("\n");
    }
    return 0;
}




/*#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            else
                printf("#");
        }
        printf("\n");
    }
    return 0;
}
*/
