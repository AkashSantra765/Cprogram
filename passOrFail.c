#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float avg;
    printf(" Enter your five subjects  marks out of 100\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    avg=total/5.0;
    if(avg>=33)
        printf("Congratulations ! you are passed\n");
    else
        printf("Sorry ! you are failed\n ");
    printf("Your total marks is %d \nAnd your average is %f",total,avg);

    return 0;
}
