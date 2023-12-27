/*#include<stdio.h>
int main()
{
    int a[10],i,j,x;
    printf("enter the 10 no");
    for(i=0;i<9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)
            if(a[i]<=a[j])
                x=a[i];
            else
                break;
        if(j==10)
            break;
    }
    printf("%d is the lowest no",x);

}*/



#include<stdio.h>
int main()
{
	int a[10],i,j;
	printf("Enter numbers");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	int val=a[0];
	for(j=1;j<5;j++)
{
	if(val>a[j])
	val=a[j];

}
printf("minimum value is %d",val);
return 0;

}
