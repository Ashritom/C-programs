#include<stdio.h>
#include<conio.h>
int main(){
	int col,row=1,num=0;
	while(row<=5){
	col=1;
while(col<=row){
	printf("%d",num+1);
	num++;
	col++;}
row++;
printf("\n");}
getch();
}
