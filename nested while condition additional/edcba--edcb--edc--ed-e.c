#include<stdio.h>
#include<conio.h>
int main(){
	int col,row=1;
	while(row<=5){
	col=6;
while(col-1>=row){
	printf("%c",95+col);
	col--;}
row++;
printf("\n");}
getch();
}
