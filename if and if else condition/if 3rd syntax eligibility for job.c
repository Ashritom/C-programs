#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	char gender[90];
	printf("Enter your gender: ");
	gets(gender);
	printf("Ener your age: ");
	scanf("%d",&age);
	
	if("male"&& age>=20)
	printf("Eligible for job");
	
	else if("female"&& age>=18)
	printf("Eligible for job");
	
	else 
	printf("Not eligible for job");
	getch();
	}
