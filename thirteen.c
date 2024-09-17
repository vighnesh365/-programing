#include<stdio.h>

void main()
{
int amount;
int notes_500,notes_100,notes_50,notes_10,notes_05,notes_01;
printf("enter the amount:");
scanf("%d",&amount);

notes_500 = amount/500;
amount = amount % 500;

notes_100 = amount/100;
amount = amount % 100;

notes_50 = amount/50;
amount = amount % 50;

notes_10 = amount/10;
amount = amount % 10;

notes_05 = amount/5;
amount = amount % 5;

notes_01 = amount/1;
amount = amount % 1;

printf("\nnumber of 500 notes:%d\nnumber of 100 notes:%d\nnumber of 50 notes:%d\nnumber of 10 notes:%d\nnumber of 5 coins :%d\nnumber of 1 coins:%d\n",notes_500,notes_100,notes_50,notes_10,notes_05,notes_01);
}