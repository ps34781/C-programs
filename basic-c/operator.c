#include<stdio.h>
void main()
{
int a,b,add,multi,sub;
float div;
printf("Enter the value of a:\n");
scanf("%d",&a);
printf("Enter the value of b:\n");
scanf("%d",&b);
add=a+b;
printf("sum of a & b:%d\n",add);
sub=a-b;
printf("subtract of a & b:%d\n",sub);
multi=a*b;
printf("multiply of a & b:%d\n",multi);
div=a/b;
printf("divide of a & b:%f\n",div);
printf("\n");
}
