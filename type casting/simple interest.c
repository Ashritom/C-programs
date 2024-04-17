#include<stdio.h>
#include<conio.h>
int main(){
float p,r,si;
int t;
printf("Enter Principle: ");
scanf("%f",&p);
printf("Enter time: ");
scanf("%d",&t);
printf("Enter rate of interest: ");
scanf("%f",&r);
si=(float)p*t*r/100;
printf("Simple Interest: %.2f",si);
getch();
}
