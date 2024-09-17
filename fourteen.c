#include<stdio.h>

void main()
{
int a,b,c;
printf("enter the three angles of the triangle:\n");
scanf("%d%d%d",&a,&b,&c);
if (a + b + c == 180)
{
printf("the triangle is valid for the respective angles");
}
else
{
printf("the triangle is not valid for the given angles");
}
}