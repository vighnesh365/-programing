#include<stdio.h>

void main()
{
char ch;
printf("enter the character to be verified:");
scanf("%c",&ch);
if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
{
printf("%c character is a vowel",ch);
}
else
{
printf("%c character is a consonent",ch);
}
}