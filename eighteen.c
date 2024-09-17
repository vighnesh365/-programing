#include<stdio.h>

void main()
{
int cp,sp,min;
printf("enter the cost price and selling price:\n");
scanf("%d%d",&cp,&sp);
if (cp - sp > 0)
{
printf("loss is %d",cp-sp);
}
else if (sp - cp > 0)
{
printf("profit is %d",sp-cp);
}
else
{
printf("no profit no loss");
}
}