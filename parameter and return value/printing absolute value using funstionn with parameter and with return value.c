#include<stdio.h>
#include<conio.h>
int absolute(int num){
	if(num>0)
    return num;
	else
	return -num;
}
int main(){
	int num;
	printf("ENTER NUMBER: ");
	scanf("%d",&num);
	printf("Absolute value: %d",absolute(num));
	getch();
}
