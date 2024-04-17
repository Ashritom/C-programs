#include<stdio.h>
#include<conio.h>
int sum(int n1,int n2,int n3){
	return n1+n2+n3;
}
int main(){
	int n1,n2,n3;
	printf("ENTER 3 NUMBERS: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("Sum: %d",n1+n2+n3);
	getch();
}
