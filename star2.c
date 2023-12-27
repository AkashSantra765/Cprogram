#include<stdio.h>
#include<conio.h>
int main(){
int i,j,n;
printf("Enter a number which do you want to print");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
    for(j=i;j>=1;j--)
    {
        printf("*");
    }
    printf("\n");
}
getch();
}

