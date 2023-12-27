#include<stdio.h>
//#include<stdlib.h>  //if use exit function
int main()
{
    int n,a,b;
     do
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&n);

         switch(n)
         {
            case 1:
                printf("Enter the two number\n");
                scanf("%d%d",&a,&b);
                printf("Sum is %d\n",a+b);
                break;
            case 2:
                printf("Enter the two number\n");
                scanf("%d%d",&a,&b);
                printf("Subtraction is %d\n",a-b);
                break;
            case 3:
                printf("Enter the two number\n");
                scanf("%d%d",&a,&b);
                printf("Multiplication is %d\n",a*b);
                break;
            case 4:
                printf("Enter the two number\n");
                scanf("%d%d",&a,&b);
                printf("Division is %d\n",a/b);
                break;
            case 5:
                break;
            //  exit(0);
            default :
                printf("Your enter is wrong\n");
        }
        if(n==5)
            break;

    }while(n!=5);
       return 0;
}
