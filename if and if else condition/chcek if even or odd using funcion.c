#include<stdio.h>
#include<conio.h>
int check(int num){
	if(num%2==0)
	printf("ENTERED NUMBER IS EVEN");
	else if(num!=0)
	printf("ENTERED NUMBER IS ODD");
	else(num==0)
	printf("Neither Even nor Odd");
}
int main(){
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	check(num);
	getch();
}
