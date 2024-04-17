#include<stdio.h>
#include<conio.h>
int main(){
	int num,a,b=1;
	printf("ENTER NUMBER: ");
	scanf("%d",&num);
	a=num;
	do{
		b=a*b;
	printf("*%d",a);
	a--;}
     while(a>=1);
     printf("=%d",b);
     getch();
}
