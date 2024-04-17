#include<stdio.h>
#include<conio.h>
int main(){
	int row,col,rows,sp;
	printf("ENTER ROWS: ");
	scanf("%d",&rows);
	for(row=1;row<=rows;row++){
	for(sp=rows-row;sp>=1;sp--);
	printf(" ");
	for(col=1;col<=row;col++)
	(row==col||col==1||row==rows)?printf("*  "):printf("  ");
	printf("\n");}
	getch();
}
/* 9th line printf gives space to the starting of the code i.e it moves the whole 
printinf towards the right
(in thus case u can use as many spaces you need to move the program )
whereas the printf in 11th line is used
to complete the triangle(in this case two spaces are used)*/

