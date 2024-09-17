#include<stdio.h>

int main(){
int a,b,c;
printf("enter the numbers to be compared:\n");
scanf("%d%d%d",&a,&b,&c);
if ((a>b)&&(a>c))
{
printf("the number %d is greater than %d and %d",a,b,c);
}
else if ((b>a)&&(b>c))
{
printf("the number %d is greater than %d and %d",b,a,c);
}
else if ((c>a)&&(c>b))
{
printf("the number %d is greater than %d and %d",c,a,b);
}
else 
{
printf("all are equal");
}
return 0;




} 