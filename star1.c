#include<stdio.h>
#include<conio.h>
int main(){
int i,j,n;
printf("Enter a number which do you want to print");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
}
getch();
}
