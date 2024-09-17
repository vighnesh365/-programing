#include<stdio.h>

int main(){

int a;
printf("enter the number to be verified:\n");
scanf("%d",&a);
if (a>0)
{
printf("the number is a positive number");
}
else if (a=0)
{
printf("the number is zero");
}
else 
{
printf("the number is negative number");
}
return 0;
}