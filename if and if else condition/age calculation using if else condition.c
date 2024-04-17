#include<stdio.h>
#include<conio.h>
int main(){
	int age,year;
	printf("Enter year: ");
	scanf("%d",&year);
	if(year>=2004){
    age=year-2004;
	printf("age:%d",age);}
	else
	printf("INVALID YEAR");
	getch();
}
