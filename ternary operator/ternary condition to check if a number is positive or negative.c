#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	n>0?printf("positive number"):printf("negative number");
	getch();
}
