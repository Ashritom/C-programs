#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){ 
int arr1[100][100],arr2[100][100],product[100][100]; 
int row,col,rows,cols;
printf("ENTER NUMBER OF ROWS for 1st matrix: ");
scanf("%d",&rows);
printf("ENTER NUMBER OF COLS for 1st matrix: ");
scanf("%d",&cols);
for (row=0;row<rows;row++){ 
for (col=0;col<cols;col++){
printf("Enter [%d][%d]: ",row,col);
scanf("%d",&arr1[row][col]);}}
printf("ALL elements: \n");
for (row=0;row<rows;row++){
for (col=0;col<cols;col++) {
printf("%d ", arr1[row][col]);}
printf("\n");} getch();

printf("ENTER NUMBER OF ROWS for 2nd matrix: ");
scanf("%d", &rows); 
printf("ENTER NUMBER OF COLS for 2nd matrix: "); 
scanf("%d", &cols); 
for (row=0;row<rows;row++){ 
for(col=0;col<cols;col++){ 
printf("Enter [%d][%d]: ",row,col);
scanf("%d",&arr2[row][col]);}}
printf("ALL elements: \n");
for (row=0;row<rows;row++){
for (col=0;col<cols;col++){ 
printf("%d ",arr2[row][col]);}
printf("\n");} 
getch();

printf("Transpose:\n");
for(row=0;row<rows;row++){
	for(col=0;col<cols;col++){
		printf("%d ",arr2[col][row]);
	}printf("\n");
	} 
	getch(); 
	
printf("product OF BOTH THE MATRIXES: \n");
for (row=0;row<rows;row++){ 
for(col=0;col<cols;col++){ 
product[row][col]=(arr1[row][col])*(arr2[col][row])
+(arr1[row][col]+1)*(arr2[col][row]+1);
printf("%d ",product[row][col]);}
printf("\n");}
getch();
}
