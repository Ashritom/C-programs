#include<stdio.h>
#include<conio.h>
int main(){
	int col,row=1;
	while(row<=5){
	col=1;
while(col<=6-row){
	printf("%d",col);
	col++;}
row++;
printf("\n");}
getch();
}
