#include<stdio.h>
#include"fonction.h"
int main(){
int a;
int b;
printf("\nsaisie du premier nombre:");
scanf("%d",&a);
do{
printf("\nsaisie du second nombre:");
scanf("%d",&b);
}while(b==0);
printf("%d + %d = %d",a, b, sommer(a,b));
printf("%d - %d = %d",a, b, a-b);
printf("%d / %d = %d\n",a, b, a/b);
return(0);
}
