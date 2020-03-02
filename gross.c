#include<stdio.h>
int main() 
{
int gross_salary, basic, ha, da;
printf("Enter basic salary : ");
scanf("%d",&basic);
ha = (20*basic) / 100;
da = (40*basic) / 100;
gross_salary = basic + ha + da;
printf("\nGross salary : %d \n", gross_salary);
}
