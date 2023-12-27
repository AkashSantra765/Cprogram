#include<stdio.h>
int main()
{
    int n,i=0;
    while(i<3)
    {
        printf("Enter an even number\n");
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("Congratulations! YOU WIN \n");
            break;
        }
        else
            printf("Failed\n");
        i++;
    }
    printf("GAME OVER\n");
    return 0;
}
