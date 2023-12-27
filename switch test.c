#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    switch(n)
     {
         case 1:
             printf("india\n");
             break;
         case 2:
            printf("USA\n");
            break;
         case 3:
            printf("Russia\n");
            break;
          default :
             printf("Your enter number is wrong");

      }
      return 0;
}
