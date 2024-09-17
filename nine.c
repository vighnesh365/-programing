#include<stdio.h>

void main()
{
char op;
printf("enter the character to be sorted:");
scanf("%c",&op);
if((op>='a'&&op<='z')||(op>='A'&&op<='Z'))
{
printf("%c is an alphabet",op);
}
else if(op>='0'&&op<='9')
{
printf("%c is a number",op);
}
else 
{
printf("%c is a special character",op);
}


}