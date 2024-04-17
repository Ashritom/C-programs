#include<stdio.h>
#include<conio.h>
int main(){
	int row,rows,col,sp;
	printf("ENTER ROWS: ");
	scanf("%d",&rows);
	for(row=1;row<=rows;row++){
		for(sp=rows-row;sp>=1;sp--)
		printf(" ");
		for(col=1;col<=row;col++)
		(row==col||col==1||row>=col||row==5)?printf("%d ",row):printf("  ");
		printf("\n");}
		getch();
}
/*
            1
           2 2
          3 3 3
         4 4 4 4 
        5 5 5 5 5
*/
