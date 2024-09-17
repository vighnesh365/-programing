#include<stdio.h>

void main()
{
int a,b,c;
printf("enter the sides of the triangle:\n");
scanf("%d%d%d",&a,&b,&c);
if ((a + b > c)&&(a + c > b)&&(b + c > a))
{
printf("the respective sides form a triangle");
if (a == b == c)
{
printf("the triangle is equilateral");
}
else if((a==b)||(b==c)||(c==a))
{
printf("the triangle is isosceles");
}
else
{
printf("the triangle is scalene");
}

}
else
{
printf("the sides doesn't form a triangle ");
}

}