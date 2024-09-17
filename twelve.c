#include<stdio.h>

void main()
{
int m;
printf("enter the number of month:");
scanf("%d",&m);
if ((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
{
printf("the number of days on that month is 31");
}
else if (m==2)
{
printf("the number of days in that month is 28");
}
else
{
printf("the number of days in that month is 30");
}
}
