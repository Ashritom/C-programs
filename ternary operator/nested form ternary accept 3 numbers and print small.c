#include<stdio.h>
#include<conio.h>
int main(){
	int n1,n2,n3;
	printf("ENTER n1: ");
	scanf("%d",&n1);
printf("ENTER n2: ");
	scanf("%d",&n2);
printf("ENTER n3: ");
	scanf("%d",&n3);
printf("LESS NUMBER: %d",(n1<n2&&n1<n3)?n1:(n2<n1&&n2<n3)?n2:n3);
getch();
}
