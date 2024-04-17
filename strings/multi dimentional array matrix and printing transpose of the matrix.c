#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
int arr[100][100];
int row,col,rows,cols;
printf("Enter numbwer of rows: ");
scanf("%d",&rows);
printf("Enter number of cols: ");
scanf("%d",&cols);
for(row=0;row<rows;row++){
	for(col=0;col<cols;col++){
		printf("Enter [%d][%d] ",row,col);
		scanf("%d",&arr[row][col]);
	}
}
printf("All elements:\n");
for(row=0;row<rows;row++){
	for(col=0;col<cols;col++){
		printf("%d ",arr[row][col]);
	}printf("\n");
	}
	printf("Transpose:\n");
for(row=0;row<rows;row++){
	for(col=0;col<cols;col++){
		printf("%d ",arr[col][row]);
	}printf("\n");
	}
}
	





