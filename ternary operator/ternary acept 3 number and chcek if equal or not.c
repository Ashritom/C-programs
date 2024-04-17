#include<stdio.h>
#include<conio.h>
int main(){
	int n1,n2,n3;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("Equal or Not: %s",n1==n2&&n2==n3?printf("equal"):printf("Not Equal"));
	getch();
}
