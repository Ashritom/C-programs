#include<stdio.h>
#include<conio.h>
int main(){
	int n1,n2,temp;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&n1,&n2);
printf("Before Swapping\n");
printf("N1: %d\n",n1);
printf("N2: %d\n",n2);
temp=n1;n1=n2;n2=temp;
printf("After Swaping\n");
printf("N1: %d\n",n1);
printf("N2: %d",n2);
	getch();
}
