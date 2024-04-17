#include<stdio.h>
#include<conio.h>
int main(){
	int col,row=1,num;
	while(row<=5){
	col=5;
	num++;
while(col>=6-row){
	printf("%d",num);
	col--;}
row++;
printf("\n");}
getch();
}
