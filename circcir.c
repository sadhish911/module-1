#include <stdio.h>
int main()
{
	int r;
	float c,a;
	printf("enter radius\n");

	scanf("%d",&r);
    c=2*3.14*r;
    a=3.14*r*r;
    printf("the circumference is=%f\n",c);
    printf("the area is=%f\n",a);
}