#include<stdio.h>
void main()
{
	float l,b,r,ar,ac,peri,circum;
       	printf("Enter length:");
	scanf("%f",&l);
	printf("Enter breath:");
	scanf("%f",&b);
	ar = l * b;
	printf("Area of reactangle %f\n",ar);
	printf("Enter Radius:");
	scanf("%f",&r);
	ac = 3.14 * r * r;
	peri = 2 * 3.14 * r ;
	circum = 2 * 3.14 * r;
       	printf("area of circle : %f\n",ac);
       	printf("perimeter of circle : %f\n",peri);
       	printf("Circumference of circle : %f\n",circum);
}
