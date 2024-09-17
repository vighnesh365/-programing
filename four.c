#include<stdio.h>

void main(){

int a;
printf("enter the number to be verified:\n");
scanf("%d",&a);
if (a % 55==0)
{
printf("the number is divisible by 5 and 11");
}
else
{
printf("the number is not divisible by 5 and 11");
}
}