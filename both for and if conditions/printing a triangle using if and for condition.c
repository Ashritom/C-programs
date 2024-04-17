#include<stdio.h>
#include<conio.h>
int main(){
	int row,col;
	for(row=1;row<=5;row++){
	for(col=1;col<=5;col++){
	if(row==5||col==1||col==row)
	printf("* ");
	else
	printf("  ");}
	printf("\n");}
	getch();
}
/* it is fixed program i.e we dont get option
to input our choice*/

