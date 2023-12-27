#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("Enter the celcius temperature\n");
    scanf("%d",&c);
    f=((c*9)/5)+32;                                      // it is not work
    /*x=c*9;
    x=x/5;
    f=x+32;*/
    printf("The fahrenheit temperature is %f ",f);
    getch();
}
