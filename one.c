#include<stdio.h>

void main(){
int a,b;
printf("enter the two numbers:\n");
scanf("%d%d",&a,&b);
if(a>>b){
printf("the number %d is greater than %d",a,b);
}
else{
printf("the number %d is greater than %d",b,a);
}

}