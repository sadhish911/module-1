#include<stdio.h>
int main()
{
int a,d,m,y;
printf("Enter the integer value \n");
scanf("%d",&a);
y=a/365;
m=a/30;
d=a-(m*30);
printf("Integer in years %d \n",y);
printf("Integer in months %d \n",m);
printf("Integer in days %d \n",d);
}
