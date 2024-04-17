#include<stdio.h>
#include<conio.h>
int main(){
	int col,row=1,num=6;
	while(row<=5){
	col=5;
	num--;
while(col>=row){
	printf("%d",num);
	col--;}
row++;
printf("\n");}
getch();
}
