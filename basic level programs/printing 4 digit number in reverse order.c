#include<stdio.h>
#include<conio.h>
int main(){
	int n1;
	printf("Enter 4 digit number: ");
	scanf("%d",&n1);
	 printf("%d",n1%10);
	 n1=n1/10;
	 printf("%d",n1%10);
	  n1=n1/10;
	   printf("%d",n1%10);
	     n1=n1/10;
	    printf("%d",n1%10); 
	getch();
}
