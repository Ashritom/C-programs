#include<stdio.h>
#include<conio.h>
int main(){
int num,factor=0,i=1;
printf("Enter Number: ");
scanf("%d",&num);
while(i<=num){
	if(num%i==0)
	factor++;
	i++;}
	if(factor==2)
	printf("Prime Number");
	else
	printf("Not Prime Number");
	getch();
}
