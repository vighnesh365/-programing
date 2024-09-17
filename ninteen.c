#include<stdio.h>

void main()
{
int physics,chemistry,biology,mathematics,computer,subjects,percent;

printf("enter the marks of physics,chemistry,biology,mathematics and computer:\n");
scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&mathematics,&computer);

subjects = physics+chemistry+biology+mathematics+computer;
percent = subjects/5;

printf("the percentage of the marks is %d",percent);

if (percent>=90)
{
printf("grade A");
}
else if (percent>=80)
{
printf("grade B");
}
else if (percent>=70)
{
printf("grade C");
}
else if (percent>=60)
{
printf("grade D");
}
else if (percent>=40)
{
printf("grade E");
}
else (percent<40)
{
printf("grade F");
}



}