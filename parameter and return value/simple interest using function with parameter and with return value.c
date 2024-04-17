#include<stdio.h>
#include<conio.h>
float si(float p,int t,float r){
return (p*t*r)/100;
}
int main(){
	printf("SIMPLE INTEREST: %.2f",si(25000,12,7));
	getch();
}
