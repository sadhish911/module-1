#include<stdio.h>
int main()
{
int a,b;
printf("Enter the values for the two points: \n");
scanf("%d %d",&a,&b);
printf("The distance between two points:");
if(a>b)
{
printf("%d \n",a-b);
}
else
{
printf("%d \n",b-a);
}
}
