#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float x1,x2;
printf("enter the quotients of the quadratic equation:\n");
scanf("%d%d%d",&a,&b,&c);
x1 = (-b+sqrt(b*b-4*a*c))/2*a;

x2 = (-b-sqrt(b*b-4*a*c))/2*a; 

printf("the roots of the quadratic equation are %f and %f",x1,x2);

}