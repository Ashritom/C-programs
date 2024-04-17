#include<stdio.h>
#include<conio.h>
int large(int n1,int n2){
if(n1>=n2)
return n1;
else
return n2;
}
int main(){
	printf("LARGE NUMBER: %d",large(30,20));
	getch();
	}
