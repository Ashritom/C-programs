#include<stdio.h>
#include<conio.h>
int main(){
	int col,row=1;
	while(row<=5){
	col=5;
while(col>=6-row){
	printf("%c",row+96);
	col--;}
row++;
printf("\n");}
getch();
}
