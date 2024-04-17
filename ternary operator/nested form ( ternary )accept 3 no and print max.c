#include<stdio.h>
#include<conio.h>
int main(){
	int n1,n2,n3;
	printf("Enter 3 number: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("Max: %d",n1>n2&&n1>n3?n1:n2>n1&&n2>n3?n2:n3);
getch();	
}

