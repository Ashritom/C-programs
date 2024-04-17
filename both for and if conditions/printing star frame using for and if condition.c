#include<stdio.h>
#include<conio.h>
int main(){
	int row,col;
	for(row=1;row<=30;row++){
	for(col=1;col<=30;col++){
		if(row==1||row==30||col==1||col==30)
		printf("*");
		else
		printf(" ");}
		printf("\n");}
	getch();
}
