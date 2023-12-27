#include<stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if((n%3==0) && (n%2==0))
        printf("yes, the given number is divisible by 3 and 2");
    else
        printf("no, the given number is not divisible by 3 and 2");
        getch();
}
