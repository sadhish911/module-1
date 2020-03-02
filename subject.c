#include<stdio.h>
int main()
{
int a,b,c,d,e,f,sum,avg;
printf("Enter the marks for subject 1 \n");
scanf("%d",&a);
printf("Enter the marks for subject 2 \n");
scanf("%d",&b);
printf("Enter the marks for subject 3 \n");
scanf("%d",&c);
printf("Enter the marks for subject 4 \n");
scanf("%d",&d);
printf("Enter the marks for subject 5 \n");
scanf("%d",&e);
sum=a+b+c+d+e;
printf("The total: %d \n",sum);
avg=sum/5;
printf("The average: %d \n",avg);
}
