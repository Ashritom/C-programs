#include<stdio.h>
#include<conio.h>
int main(){
	int n1,n2;
	printf("Enter 2 numbers: ");
	scanf("%d%d", &n1,&n2);
	if(n1<n2)
	printf("small number: %d", n1);
	else 
	printf("small number: %d",n2);
getch();	
}
