#include<stdio.h>

void main()
{
int ch;
printf("enter the alphabet:");
scanf("%c",&ch);
if(ch>='a' || ch<='z')
{
printf("the alphabet is lower case");
}
else
{
printf("the alphabet is upper case");
} 
}