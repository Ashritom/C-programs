#include<stdio.h>
#include<conio.h>
void main(){
	int arr[100],n,cnt;
	printf("ENTER N: ");
	scanf("%d",&n);
	for(cnt=0;cnt<n;cnt++){
	printf("ENTER ELEMENTS: ");
	scanf("%d",&arr[cnt]);}
	for(cnt=0;cnt<n;cnt++){
	printf("%d",arr[cnt]);}
	getch();
}
