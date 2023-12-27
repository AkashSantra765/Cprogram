#include<stdio.h>
int main()
{
    int n,a,b;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice\n");
    scanf("%d",&n);
    switch(n)
       {
       case 1:
            printf("Enter the two number\n");
            scanf("%d%d",&a,&b);
            printf("Addition is %d",a+b);
            break;
       case 2:
            printf("Enter the two number\n");
            scanf("%d%d",&a,&b);
            printf("Subtraction is %d",a-b);
            break;
        case 3:
            printf("Enter the two number\n");
            scanf("%d%d",&a,&b);
            printf("Multiplication is %d",a*b);
            break;
        case 4:
            printf("Enter the two number\n");
            scanf("%d%d",&a,&b);
            printf("Division is %d",a/b);
            break;
        default :
            printf("Your choice is wrong");
       }
       return 0;
}
