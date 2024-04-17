#include<stdio.h>
#include<conio.h>
int main(){
	int col,row=1;
	while(row<=5){
		col=1;
		while(col<=row){
			printf("%d",row%2==0?0:1);
			col++;}
	    row++;
	printf("\n");}
}
